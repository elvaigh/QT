#include <QCoreApplication>
#include <iostream>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QString>
#include <Windows.h>
#include <QElapsedTimer>
#include <QFile>
#include <QApplication>
#include <QPushButton>
#include <QProgressDialog>
#include <QVBoxLayout>

#include <QTextStream>
#include <string>
#include<iostream>
#include<fstream>
#include "Port.h"


#define maxPaquet 156
using namespace std;
char lpBuffer[maxPaquet];
FILE* fp;
const char filename[]="C:/Users/cheikh/Desktop/contratpro/GUI/portcom/EXAMPLES_OTA-CLIENT1.bin";
QFile file();

QSerialPort serial;
QElapsedTimer timer;
int N=0;
int pq=0;
int av=0;
int re=0;
int getSize(){
    int n=0;
    ifstream file( filename, ios::binary | ios::ate);
    n=file.tellg();
    file.close();
    return n;
}

ifstream infile;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QProgressDialog progress("Sending data...", "cancel", 0,100, nullptr);
    progress.setWindowModality(Qt::WindowModal);
    progress.show();
    Port pp;
    QPushButton *bouton1 = new QPushButton("Bonjour");
    QPushButton *bouton2 = new QPushButton("les");
    QPushButton *bouton3 = new QPushButton("Zéros");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(bouton1);
    layout->addWidget(bouton2);
    layout->addWidget(bouton3);
    pp.setLayout(layout);
    pp.show();
    /*serial.setPortName("COM3");
    serial.open(QIODevice::ReadWrite);
    serial.setBaudRate(QSerialPort::Baud115200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    infile.open(filename,ios::binary|ios::in);
    N=getSize();
    progress.setMaximum((int)(N/maxPaquet));
    while(!serial.isOpen()){
        qDebug() << "Serial not open";
        serial.open(QIODevice::ReadWrite);
    }

    if (serial.isOpen() && serial.isWritable())
    {
        //qDebug() << "Serial is open";

        while(infile.read(lpBuffer,sizeof(lpBuffer))){//!line.isNull()
            serial.write(lpBuffer);//line.toUtf8()
            pq++;
            serial.flush();
            serial.waitForBytesWritten(2);
            av=serial.bytesAvailable();
            qDebug()<< "cur line "<<lpBuffer<<"cur av "<<av<<" paquet n° : "<<pq;
            timer.start();
            //while (timer.elapsed() <500);
            //serial.waitForReadyRead(maxPaquet);
            //input = serial.read(2);
            //qDebug()<<input <<"  available "<<av;
            progress.setValue(pq);
            if(progress.wasCanceled())break;

        }
        //qDebug()<<"file size:"<<N<<" paquets ";
    }*/
    return a.exec();
}
