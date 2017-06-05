#ifndef FENETRES_H
#define FENETRES_H

#include <QProgressDialog>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
class Fenetres  : public QWidget
{

public:
    Fenetres();
    ~Fenetres();
    void draw();
    void shosBar();

private:
    QPushButton *m_bouton;
    QGridLayout *layout;
    QProgressDialog * progress;

};

#endif // FENETRES_H
