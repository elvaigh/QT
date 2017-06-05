#include "fenetres.h"

Fenetres::Fenetres() : QWidget()
{

    // Construction du bouton
    m_bouton = new QPushButton("Pimp mon bouton !", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.png"));
    m_bouton->move(60, 50);
    progress=new QProgressDialog("Sending data...", "cancel", 0,100, nullptr);
    progress->setWindowModality(Qt::WindowModal);
    layout = new QGridLayout;
    layout->addWidget(progress,1,1);
    layout->addWidget(m_bouton,2,0);
    this->setLayout(layout);
}
void Fenetres:: shosBar(){

}

void Fenetres:: draw()
{
    layout->addWidget(m_bouton,2,0);
    this->setLayout(layout);
}

Fenetres::~Fenetres()
{
    delete m_bouton;
    delete progress;
}
