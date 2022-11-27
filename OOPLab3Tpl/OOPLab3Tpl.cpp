// OOPLab3Tpl.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №3. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//

#include <iostream>
#include "1,1.h"
#include "Lab3Expaple.h"
    
int main()
{
    int a, b, c;
    cout << " Lab #3  !\n";
//  Код виконання завдань
//  Головне меню завдань
//  Функції та класи можуть знаходитись в інших файлах проекту
// 
    //DATE
    DATE Birthday;
    Birthday.setDay(12);
    Birthday.setMonth(3);
    Birthday.setYear (1989);
    a = Birthday.getDay();
    cout << a << endl;
    b = Birthday.getMonth();
    cout << b << endl;
    c = Birthday.getYear();
    cout << c << endl;
    Birthday.showDATE1();
    Birthday.showDATE2();


    cout << endl;
    cout << endl;
    cout << endl;

    // VECTOR
    float rvariabl;
    float* arrry = nullptr;
    float arrey[]{ 224.5,543.5,63.2 };
    VECTOR Heppy(arrey);
    Heppy.showAll();
    rvariabl = Heppy.GGetRand();
    cout << rvariabl<<endl;
    VECTOR Sad(Heppy),Galarios;
    Sad.showAll();
    Sad.GGetRand();
    Galarios = Sad;
    Galarios.Plus(Sad);
    Galarios.showAll();
    Sad.SSetRand();
    Galarios.VProduct(Sad);
    Galarios.showAll();
    Galarios.Minus(Sad);
    Galarios.showAll();
    short int t=15;
    Galarios.Deplicate(t);
    Galarios.showAll();
    if (Sad.Menshe(Heppy)) cout << "yes" << endl;

    

    cout << endl;
    cout << endl;
    cout << endl;


    MATRIX F, H(6), M(6), K(3, 9, 241), Z(K);
    F.ShowMatrix();
    cout << endl;
    H.ShowMatrix();
    cout << endl;
    K.ShowMatrix();
    cout << endl;
    Z.ShowMatrix();
    cout << endl;
    H.Default(738);
    H.ShowMatrix();
    cout << endl;
    cout << H.ElemByInd(5,2);
    cout << endl;
    cout << endl;
    M.Default(53);
    H.Plus(M);
    H.ShowMatrix();
    cout << endl;
    M.Default(1533);
    H.Minus(M);
    H.ShowMatrix();
    cout << endl;
    M.Default(-3);
    H.Multiplication(M);
    H.ShowMatrix();
    cout << endl;
    H.Div(3);
    H.ShowMatrix();
    cout << endl;

    /*
    int conv = 1;
    if (conv == 1) conv = mainExample1();
    if (conv == 1) conv = mainExample3(); 
    if (conv == 1) conv = mainExample4();*/

}

