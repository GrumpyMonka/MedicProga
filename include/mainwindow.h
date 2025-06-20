#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "conclusion.h"
#include "form1.h"
#include "form2.h"
#include "form3.h"
#include "form4.h"
#include "form5.h"
#include "form6.h"
#include "form7.h"
#include "form8.h"
#include "helloform.h"

#include <QGridLayout>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    HelloForm* hForm;
    Form1* form1;
    Form2* form2;
    Form3* form3;
    Form4* form4;
    Form5* form5;
    Form6* form6;
    Form7* form7;
    Form8* form8;
    Conclusion* con;

    double indSphere = 0.0;
    double Dh = 0.0;
    double angleA = 0.0;
    double angleB = 0.0;
    double ICAS = 0.0;
    double ISA = 0.0;
    double angleC = 0.0;
    double aK = 0.0;
    double lN = 0.0;
    double pN = 0.0;

    QString conc1 = "Ацетабулярный коэффициент≥150.\n Показана остеотомия таза+неполная периацетабулярная остеотомия\n За счет остеотомии таза осуществляется наклон в сагиттальной и горизонтальной плоскости\n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n Горизонтальная плоскость.\n Наружная ротация ацетабулярного фрагмента: В - 20°= " + QString::number(angleC - 20.0) + "\n За счет неполной ПАО осуществляется латеральный наклон\n Степень латерального наклона соответствует углу наклона опорной поверхности Б = " + QString::number(angleB);
    QString conc2 = "Ацетабулярный коэффициент≥150.\n Показана неполная периацетабулярная остеотомия (ПАО)\n Степень латерального наклона соответствует углу наклона опорной поверхности Б = " + QString::number(angleB) + "\n Степень переднего наклона фрагмента равна: " + QString::number(pN);
    QString conc3 = "Ацетабулярный коэффициент≥150.\n Показана остеотомия таза+неполная периацетабулярная остеотомия\n За счет остеотомии таза осуществляется наклон в сагиттальной и горизонтальной плоскости\n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n Горизонтальная плоскость.\n Наружная ротация ацетабулярного фрагмента: В - 20°= " + QString::number(15.0 - angleC) + "\n За счет неполной ПАО осуществляется латеральный наклон\n Степень латерального наклона соответствует углу наклона опорной поверхности Б = " + QString::number(angleB);
    QString conc4 = "За счет остеотомии таза осуществляется наклон во фронтальной, сагиттальной и горизонтальной плоскости\n Во фронтальной плоскости (латеральный наклон)\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n В сагиттальной плоскости (передний наклон)\n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n Горизонтальная плоскость. Наружная ротация ацетабулярного фрагмента: В - 20° = " + QString::number(angleC - 20.0) + "\n За счет неполной ПАО осуществляется дополнительный латеральный наклон\n Степень дополнительного латерального наклона:  угол  наклона опорной поверхности Б – \n Угол наклона впадины после остеотомии таза-?";
    QString conc5 = "За счет остеотомии таза осуществляется наклон во фронтальной и сагиттальной плоскости\n Во фронтальной плоскости (латеральный наклон)\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n В сагиттальной плоскости (передний наклон)\n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n За счет неполной ПАО осуществляется дополнительный латеральный наклон\n Степень дополнительного латерального наклона:  угол  наклона опорной поверхности Б – \n Угол наклона впадины после остеотомии таза-?";
    QString conc6 = "За счет остеотомии таза осуществляется наклон во фронтальной, сагиттальной и горизонтальной плоскости\n Во фронтальной плоскости (латеральный наклон)\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n В сагиттальной плоскости (передний наклон)\n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n Горизонтальная плоскость. Наружная ротация ацетабулярного фрагмента: В - 20° = " + QString::number(15.0 - angleC) + "\n За счет неполной ПАО осуществляется дополнительный латеральный наклон\n Степень дополнительного латерального наклона:  угол  наклона опорной поверхности Б – \n Угол наклона впадины после остеотомии таза-?";
    QString conc7 = "Ацетабулярный коэффициент≥150.\n Показана остеотомия таза.\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n Степень переднего наклона равна: " + QString::number(pN) + "\n Наружная ротация ацетабулярного фрагмента:  равна" + QString::number(angleC - 20.0);
    QString conc8 = "Ацетабулярный коэффициент≥150.\n Показана остеотомия таза.\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n Степень переднего наклона равна: " + QString::number(pN);
    QString conc9 = "Ацетабулярный коэффициент≥150.\n Показана остеотомия таза.\n Степень латерального наклона ацетабулярного фрагмента равна: " + QString::number(lN) + "\n Степень переднего наклона равна: " + QString::number(pN) + "\n Наружная ротация ацетабулярного фрагмента:  равна" + QString::number(15.0 - angleC);
    QString conc10 = "За счет остеотомии таза осуществляется наклон во фронтальной, сагиттальной и горизонтальной плоскости.\n Во фронтальной плоскости (латеральный наклон):\n Степень латерального наклона ацетабулярного фрагмента соответствует величине угла наклона опорной поверхности Б = " + QString::number(angleB) + "\n В сагиттальной плоскости (передний наклон): \n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n  Горизонтальная плоскость.\n Наружная ротация ацетабулярного фрагмента:  В - 20° = " + QString::number(angleC - 20.0) + "\n За счет ацетабулопластики осуществляется дополнительное  латеральное покрытие наклон.\n Величина трансплантата:  " + QString::number(0.1 + (Dh * (1.0 - ICAS)));
    QString conc11 = "За счет остеотомии таза осуществляется наклон во фронтальной и сагиттальной плоскости.\n Во фронтальной плоскости (латеральный наклон):\n Степень латерального наклона ацетабулярного фрагмента соответствует величине угла наклона опорной поверхности Б = " + QString::number(angleB) + "\n В сагиттальной плоскости (передний наклон): \n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n За счет ацетабулопластики осуществляется дополнительное латеральное покрытие наклон.\n Величина трансплантата: " + QString::number(0.1 + (Dh * (1.0 - ICAS)));
    QString conc12 = "За счет остеотомии таза осуществляется наклон во фронтальной, сагиттальной и горизонтальной плоскости.\n Во фронтальной плоскости (латеральный наклон):\n Степень латерального наклона ацетабулярного фрагмента соответствует величине угла наклона опорной поверхности Б = " + QString::number(angleB) + "\n В сагиттальной плоскости (передний наклон): \n Степень переднего наклона фрагмента равна: " + QString::number(pN) + "\n  Горизонтальная плоскость.\n Наружная ротация ацетабулярного фрагмента:  В - 20° = " + QString::number(15.0 - angleC) + "\n За счет ацетабулопластики осуществляется дополнительное  латеральное покрытие наклон.\n Величина трансплантата:  " + QString::number(0.1 + (Dh * (1.0 - ICAS)));

    void setStandValues();

    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void createForm();

public slots:
    void set1Win();
    void set2Win(bool flag);
    void set3Win(bool flag);
    void set4Win();
    void set5Win();
    void set6Win();
    void setLastWin();
    void checkParams(double p);
    void getIndSphere(double p, double p2);
    void getAngleAB(double pA, double pB);
    void getICASandISA(double pIC, double pIS);
    void getAngleC(double p);
    void getAK(double p);
    void getlN(double p);
    void setHello();

signals:
    void signal(double p);
    void signal2(QString s);

private:
    Ui::MainWindow* ui;
    QGridLayout* gridLayout;
};
#endif // MAINWINDOW_H
