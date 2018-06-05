#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
//#include <QGLWidget>

//class GLUquadric;
//class MyGLWidget : public QGLWidget
class MyGLWidget : public QOpenGLWidget,protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit MyGLWidget(QWidget *parent = 0);
    void initTimer();
     ~MyGLWidget();

protected:
    //��3���麯�����¶���
    void initializeGL();
    void resizeGL(int w,int h);
    void paintGL();

    void keyPressEvent(QKeyEvent *event);//��������¼�

private:
    bool full_screen;//�Ƿ�ȫ����ʾ

    GLfloat el_xRot;//��ؽ���x����ת�ĽǶ�
    GLfloat el_yRot;//��ؽ���y����ת�ĽǶ�
    GLfloat el_zRot;//��ؽ���z����ת�ĽǶ�

    GLfloat sh_xRot;//��ؽ���x����ת�ĽǶ�
    GLfloat sh_yRot;//��ؽ���y����ת�ĽǶ�
    GLfloat sh_zRot;//��ؽ���z����ת�ĽǶ�

    int sh_len;//��ؽڳߴ�
    int sh_wid;
    int sh_hig;
    int el_len;//��ؽڳߴ�
    int el_wid;
    int el_hig;
    int plot_deep;

signals:
    
public slots:
    
};

#endif // MYGLWIDGET_H
