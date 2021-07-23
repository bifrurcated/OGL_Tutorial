#include "widget.h"

Widget::Widget(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

Widget::~Widget()
{

}

void Widget::initializeGL()
{
    glClearColor(1.0f,0.0f,0.0f,1.0f);

    //Включает буббер глубины
    glEnable(GL_DEPTH_TEST);

    //Включает отсичение задних граней, чтобы они не рисовались
    glEnable(GL_CULL_FACE);
}

void Widget::resizeGL(int w, int h)
{
    //Отношение ширины на высоту
    float aspect = w/(h ? (float)h : 1);
    //делаем матрицу единичной
    m_projectionMatrix.setToIdentity();
    //param: угол у усечёного конуса камеры, аспект рети, 3 и 4 передняя и дальняя плоскость отсечения
    m_projectionMatrix.perspective(45, aspect, 0.1f, 10.0f);
}

void Widget::paintGL()
{
    //Будет вызываться каждый раз при перерисовки окна
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

