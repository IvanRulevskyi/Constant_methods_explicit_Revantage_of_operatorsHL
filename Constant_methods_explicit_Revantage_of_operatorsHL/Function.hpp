#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Матриці: Створіть клас для роботи з матрицями і перевантажте оператори додавання, віднімання, множення та присвоєння для роботи з матрицями.
//Також перевантажте оператор += для конкатенеації матриць, наприклад, схематично результат буде таким:
//{1, 2, 3} += {4, 5, 6} == {1, 2, 3, 4, 5, 6};

class Matrix
{
private:
    vector<int> matrix;
public:
    Matrix(vector<int> source):
    matrix(source){}
    
    void setMatrix(vector<int> matrix);
    vector<int> getMatrix() const;
    
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator+=(const Matrix& other) const;
    void printMatrix();
};
//Рядки: Створіть клас для роботи зі рядками і перевантажте оператори додавання та присвоєння для конкатенації рядків.
class String
{
private:
    string str;
    
public:
    String(string str):
    str {str}{}
    
    void setString(string str);
    string getString() const;
    String operator+=(const String& other);
    void printString();
};

//Час: Створіть клас, який представляє час у годинах, хвилинах і секундах.
//Перевантажте оператори додавання, віднімання, порівняння,
//виводу (+, -, ==, >, <<) тощо для роботи з об'єктами цього класу.

class Time
{
private:
    int sec;
    int minute;
    int hour;
public:
    Time(int sec, int minute, int hour):
    sec (sec),
    minute(minute),
    hour(hour){}
    
    int getSec() const;
    int getMinute() const;
    int getHour() const;
    Time operator+(const Time& other);
    Time operator-(const Time& other);
    bool operator==(const Time& other) const;
    bool operator>(const Time& other) const;
    friend ostream& operator<<(ostream& os, const Time& t)
    {
        os << "Hour: " << t.hour << "; Minute: " << t.minute << "; Second: " << t.sec;
        return os;
    }
    void printTime();
    
    
};

