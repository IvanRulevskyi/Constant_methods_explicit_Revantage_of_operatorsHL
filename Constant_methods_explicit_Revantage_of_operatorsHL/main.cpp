#include "Function.hpp"
int main()
{
//Матриці: Створіть клас для роботи з матрицями і перевантажте оператори додавання, віднімання, множення та присвоєння для роботи з матрицями.
//Також перевантажте оператор += для конкатенеації матриць, наприклад, схематично результат буде таким:
//{1, 2, 3} += {4, 5, 6} == {1, 2, 3, 4, 5, 6};
    
    
    Matrix m1({1,2,6});
    Matrix m2({1,2,3});
    Matrix res = m1 + m2;
    res.printMatrix();
    Matrix res2 = m1 - m2;
    res2.printMatrix();
    Matrix res3 = m1 * m2;
    res3.printMatrix();
    Matrix res4 = m1 += m2;
    res4.printMatrix();

//Рядки: Створіть клас для роботи зі рядками і перевантажте оператори додавання та присвоєння для конкатенації рядків.
    String s1("hello");
    String s2("World");
    
    s1+=s2;
    s1.printString();
    cout<<endl;
    
    String s3 = s1 += s2;
    s3.printString();
    
    cout<<endl;
    
//Час: Створіть клас, який представляє час у годинах, хвилинах і секундах.
//Перевантажте оператори додавання, віднімання, порівняння,
//виводу (+, -, ==, >, <<) тощо для роботи з об'єктами цього класу.
    Time t1(30, 20, 12);
    Time t2(20, 10, 10);
    
    Time t3 = t1+t2;
    t3.printTime();
    
    if (t1 == t2)
        cout << "t1 is equal to t2" << endl;
    else
        cout << "t1 is not equal to t2" << endl;
        
    if (t1 > t2)
        cout << "t1 is greater than t2" << endl;
    else
        cout << "t1 is not greater than t2" << endl;
    
    
   
    
    
    

}
