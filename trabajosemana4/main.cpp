#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int num,suma=0, mayor;

int generar()
{
    int xnum;
    xnum = 1 + rand() % (300-1);
    //generar numero
    return xnum;
}

int sumadigitos(int num, int suma)
{
    int xsuma=0;
    while(num!=0)
    {
        xsuma=num%10;
        if(num!=0)
        suma+=xsuma;
        num=num/10;
    }
    //programa
    return suma;
}

int mayordigito(int num)
{
    int mayor=0,xsuma=0;
    while(num!=0)
    {
        xsuma=num%10;
        if(mayor<xsuma)
            mayor=xsuma;
        num=num/10;

    }
    //programa
    return mayor;
}

int main()
{
    srand(time(0));
    num=generar();
    suma=sumadigitos(num,suma);
    mayor=mayordigito(num);
    cout<<"Numero generado es..: "<<num<<endl;
    cout<<"La suma del numero generado es..: "<<suma<<endl;
    cout<<"El mayor de los numeros es..: "<<mayor<<endl;
}
