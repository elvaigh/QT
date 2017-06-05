#include "fenetres.h"




int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Fenetres fenetre;
    fenetre.show();

    /*QPushButton *showBar = new QPushButton("Show Status");
    QPushButton *cancel = new QPushButton("Cancel");

    QProgressDialog * progress=new QProgressDialog("Sending data...", "cancel", 0,100, nullptr);
    progress->setWindowModality(Qt::WindowModal);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(showBar, 2, 0);
    layout->addWidget(cancel, 2, 2);
    layout->addWidget(progress, 1, 1);
    fenetre.setLayout(layout);
    progress->setMaximum(100000);

    for(int i=0;i<=100000;i++){
        progress->setValue(i);
    }*/

    return app.exec();
}
