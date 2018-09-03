#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void findR(double d1, double d2)
    {        
        int re2 = d1/d2;
        double re1 = d2 * re2;
        double res1 = d1 - re1;
        qDebug() << QString::number(d1,'f',7) << QString::number(d2,'f',7)
                 << "rem = " << QString::number(res1, 'f',7);
    }

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.findR(3.4, 1.1);

    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
