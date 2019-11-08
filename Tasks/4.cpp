#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int NOD(int a, int b)
{
    while (a*b != 0)
    if (a > b)
    {
        a = a % b;
    }
    else
    {
    b = b % a;
    }
return (a + b);
}
int NOK(int a, int b)
{
    return (a / NOD(a, b))*b;
}
int main()
{
    int a, b;
    cout « "Enter your number a:" « endl;
    cin » a;
    cout « "Enter your number b:" « endl;
    cin » b;
    cout « "NOD: " « NOD(a, b) « endl;
    cout « "NOK:" « NOK(a, b) « endl;
}