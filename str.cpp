#include <iostream>
#include "str.h"
#include <math.h>
using namespace std;


Complex Sum(Complex a,Complex b)
{
    Complex result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;

}

Complex Dif(Complex a,Complex b)
{
    Complex result;
    result.x=a.x-b.x;
    result.y=a.y-b.y;
    return result;

}

Complex Mult(Complex a,Complex b)
{
    Complex result;
    result.x=a.x*b.x-a.y*b.y;
    result.y=a.x*b.y+a.y*b.x;
    return result;
}

Complex Div(Complex a,Complex b)
{
    Complex result;
    result.x=(a.x*b.x+a.y*b.y)/(b.x*b.x+b.y*b.y);
    result.y=(-a.x*b.y-a.y*b.x)/(b.x*b.x+b.y*b.y);
    return result;

}

Complex Con(Complex a)
{
    Complex result;
    result.x=a.x;
    result.y=-a.y;
    return result;
}

double Modul(Complex a)
{
    return sqrt(a.x*a.x+a.y*a.y);
}

double Arg(Complex a)
{
    return acos(a.x/(sqrt(a.x*a.x+a.y*a.y)));
}

       Complex input()
{
    Complex result;
    cout<<"Enter real part: ";
    cin>>result.x;
    cout<<"Enter imagine part: ";
    cin>>result.y;
    return result;
}

void output(Complex a)
{
    cout<<"number = "<<a.x<<"+ "<<a.y<<"i";
}


