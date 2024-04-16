//
//  main.cpp
//  Constant_methods_explicit_Revantage_of_operatorsHL
//
//  Created by Иван Рулевский on 16.04.2024.
//

#include <iostream>
using namespace std;

class TimeInterval
{
private:
    int startTime;
    int endTime;
public:
    TimeInterval(int startTime, int endTime):
    startTime( startTime ),
    endTime ( endTime ){}
    
    void setStartTime(int startTime)
    {
        if (startTime < 0)
        {
            this->startTime = 0;
        }
        else
        {
            this->startTime = startTime;
        }
    }
    
    void setEndTime(int endTime)
    {
        if (endTime < 0)
        {
            this->endTime = 0;
        }
        if (endTime < startTime)
        {
            this->endTime = 0;
        }
        else
        {
            this->endTime = endTime;
        }
    }
    
    int getStartTime()
    {
        return startTime;
    }
    
    int getEndTime()
    {
        return endTime;
    }
    
    TimeInterval operator - (/*this left,*/)
    
};

int main()
{

}
