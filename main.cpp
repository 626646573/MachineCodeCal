#include <QtGui/QApplication>
#include<QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //ָ�������Ŀ�·��
    qApp->addLibraryPath("./Plugins");
    QString libPath=QObject::tr("");
    //���������
    foreach(QString str,qApp->libraryPaths()){
        libPath.append(str);
        libPath.append("\n");
    }
    //ָ���ַ����룬��ֹ��������
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    MainWindow w;
    w.show();
    
    return a.exec();
}
