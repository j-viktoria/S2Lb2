//#ifndef STR_H // тут компилятор выдает ошибку
#define STR_H


struct Complex
{
    double x,y;
};


Complex Sum(Complex a,Complex b);
Complex Dif(Complex a,Complex b);
Complex Mult(Complex a,Complex b);
Complex Div(Complex a,Complex b);
Complex Con(Complex a);
double Modul(Complex a);
double Arg(Complex a);
Complex input();
void output(Complex a);
