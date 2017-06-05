#include "Port.h"

Port::Port() : QWidget()
{
    //setFixedSize(300, 150);

    // Construction du bouton
    m_bouton = new QPushButton("Pimp mon bouton !", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.png"));
    m_bouton->move(60, 50);
    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));
}
QPushButton * Port::getButton(){
    return this->m_bouton;
}
