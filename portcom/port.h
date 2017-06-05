#ifndef PORT_H
#define PORT_H
#include <QApplication>
#include <QWidget>
#include <QPushButton>

class Port : public QWidget
{

public:
Port();
QPushButton * getButton();

private:
QPushButton *m_bouton;
};

#endif // PORT_H
