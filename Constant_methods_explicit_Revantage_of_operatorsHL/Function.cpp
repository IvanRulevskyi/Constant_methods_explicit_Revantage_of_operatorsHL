#include "Function.hpp"

//Матриці: Створіть клас для роботи з матрицями і перевантажте оператори додавання, віднімання, множення та присвоєння для роботи з матрицями.
//Також перевантажте оператор += для конкатенеації матриць, наприклад, схематично результат буде таким:
//{1, 2, 3} += {4, 5, 6} == {1, 2, 3, 4, 5, 6};

void Matrix::setMatrix(vector<int> matrix)
{
    this->matrix = matrix;
}

vector<int> Matrix::getMatrix() const
{
    return matrix;
}

Matrix Matrix::operator+(const Matrix& other) const
{
    vector<int> leftMatrix = this->matrix;
    vector<int> rightMatrix = other.getMatrix();
    
    vector<int> resultMatrix;
    
    for (size_t i = 0; i < leftMatrix.size(); i++)
    {
        resultMatrix.push_back(leftMatrix[i] + rightMatrix[i]);
    }
    return resultMatrix;
}

Matrix Matrix::operator-(const Matrix& other) const
{
    vector<int> leftMatrix = this->matrix;
    vector<int> rightMatrix = other.getMatrix();
    
    vector<int> resultMatrix;
    
    for (size_t i = 0; i < leftMatrix.size(); i++)
    {
        resultMatrix.push_back(leftMatrix[i] - rightMatrix[i]);
    }
    return resultMatrix;
}

Matrix Matrix::operator*(const Matrix& other) const
{
    vector<int> leftMatrix = this->matrix;
    vector<int> rightMatrix = other.getMatrix();
    
    vector<int> resultMatrix;
    
    for (size_t i = 0; i < leftMatrix.size(); i++)
    {
        resultMatrix.push_back(leftMatrix[i] * rightMatrix[i]);
    }
    return resultMatrix;
}

Matrix Matrix::operator+=(const Matrix& other) const
{
    vector<int> leftMatrix = this->matrix;
    vector<int> rightMatrix = other.getMatrix();
    
    vector<int> resultMatrix;
    
    for (size_t i = 0; i < rightMatrix.size(); i++)
    {
        leftMatrix.push_back(rightMatrix[i]);
    }
    
    return leftMatrix;
}

void Matrix::printMatrix()
{
    for (size_t i = 0; i < matrix.size(); i++)
    {
        cout<<matrix[i]<<" ";
    }
    cout<<endl;
}

//Рядки: Створіть клас для роботи зі рядками і перевантажте оператори додавання та присвоєння для конкатенації рядків.

void String::setString(string str)
{
    this->str = str;
}

string String::getString() const
{
    return str;
}

String String::operator+=(const String& other)
{
     this->str += other.getString();
    return *this;
}

void String::printString()
{
    for (size_t i = 0; i < str.size(); i++)
    {
        cout<< str[i] <<" ";
    }
}

//Час: Створіть клас, який представляє час у годинах, хвилинах і секундах.
//Перевантажте оператори додавання, віднімання, порівняння,
//виводу (+, -, ==, >, <<) тощо для роботи з об'єктами цього класу.

int Time::getSec() const
{
    return sec;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getHour() const
{
    return hour;
}

Time Time::operator+(const Time& other)
{
    int resHour = this->hour + other.getHour();
    int resMinute = this->minute + other.getMinute();
    int resSec = this->sec + other.getSec();
    
    return Time(resSec, resMinute, resHour);
    
}

Time Time::operator-(const Time& other)
{
    int resHour = this->hour - other.getHour();
    int resMinute = this->minute - other.getMinute();
    int resSec = this->sec - other.getSec();
    
    return Time(resSec, resMinute, resHour);
    
}

bool Time::operator==(const Time& other) const
    {
        return (this->hour == other.getHour() && this->minute == other.getMinute() && this->sec == other.getSec());
    }

bool Time::operator>(const Time& other) const
{
    if (this->hour > other.getHour())
        return true;
        
    else if (this->hour < other.getHour())
        return false;
    else if (this->minute > other.getMinute())
        return true;
    else if (this->minute < other.getMinute())
        return false;
    else if (this->sec > other.getSec())
        return true;
    else
        return false;
}

void Time::printTime()
{
    cout<<"Sec: "<<sec<< "; Minute: "<< minute<<"; Hour: "<< hour<<endl;
}
