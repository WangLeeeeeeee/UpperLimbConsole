#include "myglwidget.h"
//#include<GL/glu.h>
#include<QKeyEvent>
#include<QTimer>
#include<math.h>
#include"mainwindow.h"
#include "getsensordata.h"

//MyGLWidget::MyGLWidget(QWidget *parent) :
//    QGLWidget(parent)
MyGLWidget::MyGLWidget(QWidget *parent) :
    QOpenGLWidget(parent)

{
    full_screen=false;

    el_xRot = 0.0f;
    el_yRot = 0.0f;
    el_zRot = 0.0f;
    sh_xRot = 0.0f;
    sh_yRot = 0.0f;
    sh_zRot = 0.0f;

    el_len=1.5f;//��ؽڲ���
    el_wid=1.5f;
    el_hig=5.0f;
    sh_len=2.0f;//��ؽڲ���
    sh_wid=2.0f;
    sh_hig=4.0f;
    plot_deep=20.0f;
}

MyGLWidget::~MyGLWidget()
{
}

void MyGLWidget::initTimer()
{
    QTimer *timer_3dpaint=new QTimer(this);//����һ��3d��ͼ�Ķ�ʱ��
    //����ʱ����updataGL()��
    connect(timer_3dpaint,SIGNAL(timeout()),this,SLOT(updateGL()));
    timer_3dpaint->start(1000);///��ʱ10ms
}

void MyGLWidget::initializeGL()
{
    initializeOpenGLFunctions();

    glClearColor(0.0,0.0,0.0,0.0);//��ɫ����
    glShadeModel(GL_SMOOTH);//������Ӱƽ��

    glClearDepth(1.0);//������Ȼ���
    glEnable(GL_DEPTH_TEST);//������Ȳ���
    glDepthFunc(GL_LEQUAL);//������Ȳ�������
    glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST);//����ϵͳ��͸�ӽ�������

}

void MyGLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,(GLint)w,(GLint)h);//���õ�ǰ����
    glMatrixMode(GL_PROJECTION);//ѡ��ͶӰ����
    glLoadIdentity();//����ͶӰ����
    //�����ӿڴ�С
    //gluPerspective(45.0,(GLfloat)w/(GLfloat)h,0.1,100.0);//GLU lib cannot be used gluPerspective replaced by another function
    GLdouble zNear = 0.1;
    GLdouble zFar = 100.0;
    GLdouble fov = 45.0;
    GLdouble aspectRatio = (GLfloat)w/(GLfloat)h;
    GLdouble rFov = fov * 3.14159265 / 180.0;
    glFrustum( -zNear * tan( rFov / 2.0 ) * aspectRatio,
               zNear * tan( rFov / 2.0 ) * aspectRatio,
               -zNear * tan( rFov / 2.0 ),
               zNear * tan( rFov / 2.0 ),
               zNear, zFar );
    glMatrixMode(GL_MODELVIEW);//ѡ��ģ�͹۲����
    glLoadIdentity();//����ģ�͹۲����
}

void MyGLWidget::paintGL()
{
    float sh_x_theta,sh_y_theta,sh_z_theta,el_x_theta,el_y_theta,el_z_theta;

    el_xRot=elbow_x[receive_count_angle];
    el_yRot=elbow_y[receive_count_angle];
    el_zRot=elbow_z[receive_count_angle];
    sh_xRot=shoulder_x[receive_count_angle];
    sh_yRot=shoulder_y[receive_count_angle];
    sh_zRot=shoulder_z[receive_count_angle];

    sh_x_theta=sh_xRot*3.1415926/180;
    sh_y_theta=sh_yRot*3.1415926/180;
    sh_z_theta=sh_zRot*3.1415926/180;
    el_x_theta=el_xRot*3.1415926/180;
    el_y_theta=el_yRot*3.1415926/180;
    el_z_theta=el_zRot*3.1415926/180;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //�����Ļ����Ȼ���
    glLoadIdentity();                                   //����ģ�͹۲����

    glTranslatef(0.0f,0.0f,-plot_deep);//������Ļ
    glRotatef(sh_xRot,1.0f,0.0f,0.0f);//��x����ת
    glRotatef(sh_yRot,0.0f,1.0f,0.0f);//��y����ת
    glRotatef(sh_zRot,0.0f,0.0f,1.0f);//��z����ת
    glBegin(GL_QUADS);//���Ƽ�ؽ�
        glColor3f(0.0f,1.0f,0.0f);//��ɫ
        glVertex3f(sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,0.0f,sh_wid/2.0f);//���£����棩
        glVertex3f(sh_len/2.0f,0.0f,sh_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.5f,0.0f);//��ɫ
        glVertex3f(sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£����棩
        glVertex3f(sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.0f,0.0f);//��ɫ
        glVertex3f(sh_len/2.0f,0.0f,sh_wid/2.0f);//���ϣ�ǰ�棩
        glVertex3f(-sh_len/2.0f,0.0f,sh_wid/2.0f);//���ϣ�ǰ�棩
        glVertex3f(-sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£�ǰ�棩
        glVertex3f(sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£�ǰ�棩

        glColor3f(1.0f,1.0f,0.0f);//��ɫ
        glVertex3f(sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���£����棩
        glVertex3f(sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���£����棩

        glColor3f(0.0f,0.0f,1.0f);//��ɫ
        glVertex3f(sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(sh_len/2.0f,0.0f,sh_wid/2.0f);//���ϣ����棩
        glVertex3f(sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£����棩
        glVertex3f(sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.0f,1.0f);//��ɫ
        glVertex3f(-sh_len/2.0f,0.0f,sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,0.0f,-sh_wid/2.0f);//���ϣ����棩
        glVertex3f(-sh_len/2.0f,-sh_hig,-sh_wid/2.0f);//���£����棩
        glVertex3f(-sh_len/2.0f,-sh_hig,sh_wid/2.0f);//���£����棩
    glEnd();

    glLoadIdentity();//����ģ�͹۲����
    glTranslatef(sh_hig*cos(sh_y_theta)*sin(sh_z_theta),
                 -sh_hig*(sin(sh_x_theta)*sin(sh_y_theta)*sin(sh_z_theta)+cos(sh_x_theta)*cos(sh_z_theta)),
                 sh_hig*(cos(sh_x_theta)*sin(sh_y_theta)*sin(sh_z_theta)-sin(sh_x_theta)*cos(sh_z_theta))-plot_deep);//����ת�Ƶ���ؽڵײ�����
    glRotatef(el_xRot,1.0f,0.0f,0.0f);//��x����ת
    glRotatef(el_yRot,0.0f,1.0f,0.0f);//��y����ת
    glRotatef(el_zRot,0.0f,0.0f,1.0f);//��z����ת
    glBegin(GL_QUADS);//������ؽ�
        glColor3f(0.0f,1.0f,0.0f);//��ɫ
        glVertex3f(el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,0.0f,el_wid/2.0f);//���£����棩
        glVertex3f(el_len/2.0f,0.0f,el_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.5f,0.0f);//��ɫ
        glVertex3f(el_len/2.0f,-el_hig,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,-el_hig,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,-el_hig,el_wid/2.0f);//���£����棩
        glVertex3f(el_len/2.0f,-el_hig,el_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.0f,0.0f);//��ɫ
        glVertex3f(el_len/2.0f,0.0f,el_wid/2.0f);//���ϣ�ǰ�棩
        glVertex3f(-el_len/2.0f,0.0f,el_wid/2.0f);//���ϣ�ǰ�棩
        glVertex3f(-el_len/2.0f,-el_hig,el_wid/2.0f);//���£�ǰ�棩
        glVertex3f(el_len/2.0f,-el_hig,el_wid/2.0f);//���£�ǰ�棩

        glColor3f(1.0f,1.0f,0.0f);//��ɫ
        glVertex3f(el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,-el_hig,-el_wid/2.0f);//���£����棩
        glVertex3f(el_len/2.0f,-el_hig,-el_wid/2.0f);//���£����棩

        glColor3f(0.0f,0.0f,1.0f);//��ɫ
        glVertex3f(el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(el_len/2.0f,0.0f,el_wid/2.0f);//���ϣ����棩
        glVertex3f(el_len/2.0f,-el_hig,el_wid/2.0f);//���£����棩
        glVertex3f(el_len/2.0f,-el_hig,-el_wid/2.0f);//���£����棩

        glColor3f(1.0f,0.0f,1.0f);//��ɫ
        glVertex3f(-el_len/2.0f,0.0f,el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,0.0f,-el_wid/2.0f);//���ϣ����棩
        glVertex3f(-el_len/2.0f,-el_hig,-el_wid/2.0f);//���£����棩
        glVertex3f(-el_len/2.0f,-el_hig,el_wid/2.0f);//���£����棩
    glEnd();
}

void MyGLWidget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
       {
       case Qt::Key_F1:                                    //F1Ϊȫ������ͨ�����л���
           full_screen = !full_screen;
           if (full_screen)
           {
               showFullScreen();
           }
           else
           {
               showNormal();
           }
           break;
       case Qt::Key_Escape:                                //ESCΪ�˳���
           close();
           break;
       }
}
