#include <iostream>
#include "str.h"
#include <math.h>
using namespace std;
int main()
{
    int num=0;
    Complex a, b, result;
    cout<<"Choose operation"<<endl
        <<"1-Sum of complex numbers"<<endl
        <<"2-Differense of numbers"<<endl
        <<"3-Multiply"<<endl
        <<"4-Divide"<<endl
        <<"5- Find conjugation number"<<endl
        <<"6-Find modul"<<endl
        <<"7-Find argument"<<endl;
    cin>>num;

    switch(num)
    {
    case 1:
        cout<<"Enter first number\n";
        a=input();
        cout<<"Enter second number\n";
        b=input();
        result=Sum(a,b);
        cout<<endl;
        output(result);
        break;
    case 2:
        cout<<"Enter first number\n";
        a=input();
        cout<<"Enter second number\n";
        b=input();
        result=Dif(a,b);
        cout<<endl;
        output(result);
        break;
    case 3:
        cout<<"Enter first number\n";
        a=input();
        cout<<"Enter second number\n";
        b=input();
        result=Mult(a,b);
        cout<<endl;
        output(result);
        break;
    case 4:
        cout<<"Enter first number\n";
        a=input();
        cout<<"Enter second number\n";
        b=input();
        result=Div(a,b);
        cout<<endl;
        output(result);
        break;
    case 5:
        cout<<"Enter number\n";
        a=input();
        result=Con(a);
        cout<<endl;
        output(result);
        break;
    case 6:
        cout<<"Enter number\n";
        a=input();

        cout<<Modul(a);

        break;
    case 7:
        cout<<"Enter number\n";
        a=input();

        cout<<Arg(a);

        break;

    }
}

