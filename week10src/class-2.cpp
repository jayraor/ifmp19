#include <iostream>
#include <string>
#include <vector>
#include "class-2.h"
using namespace std;


Time::Time() 
{
    hours = minutes = 0; 
}

Time::Time(int h, int m ) 
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) 
{
    minutes += m;
    hours += minutes / 60; 
    minutes %= 60;
}

void Time::AddHr(int h) 
{
    hours += h; 
}
void Time::Reset(int h, int m) 
{
    hours = h;
    minutes = m; 
}

Time Time::operator+(const Time & t) const 
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60; 
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const 
{
    std::cout << hours << " hours, " << minutes << " minutes"; 
}


int main() 
{
    Time planning; 
    Time coding(2, 40); 
    Time fixing(5, 55); 
    Time total;
    cout << "planning time = "; 
    planning.Show();
    cout << endl;

    cout << "coding time = "; 
    coding.Show();
    cout << endl;
    cout << "fixing time = "; 
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    // operator notation
    cout << "coding + fixing = "; 
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = "; 
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);

    // function notation
    cout << "morefixing.operator+(total) = "; total.Show();
    cout << endl;
    return 0; 
}

