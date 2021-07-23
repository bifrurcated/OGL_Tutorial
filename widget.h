#ifndef WIDGET_H
#define WIDGET_H

#include <QOpenGLWidget>
#include <QMatrix4x4>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QOpenGLWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
private:
    QMatrix4x4 m_projectionMatrix;
};
#endif // WIDGET_H
