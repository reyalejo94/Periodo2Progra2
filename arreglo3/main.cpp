#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
Generar 10 numeros comprendidos entre 1-10,
luego usando una funcion generar el factorial de cada uno de los numeros
y copiar en otro arreglo los resultados.
Presentar dos arreglos.
*/

const int tam=9;
int numero[tam],fact[tam];

void ingreso(int numero[])//procedimiento
{
    srand(time(0));
    for(int i=0;i<=tam;i++)
    {
        numero[i] = 1 + rand() % (10-1);
    }
}

int factorial(int numero)//funcion
{
    int fact=1;
    for(int i=1; i<=numero;i++)
    {
        fact=fact*i;
    }
    return fact;
}

void calcular(int numero[],int fact[])
{
    for(int i=1; i<=tam;i++)
    {
        fact[i]=factorial(numero[i]);
    }
}

void presentar(int numero[],int fact[])
{
    for(int i=1; i<=tam;i++)
    {
        cout<<"Factorial de "<<numero[i]<<" es "<<fact[i]<<endl;
    }
}

int main()
{
    ingreso(numero);
    calcular(numero,fact);
    presentar(numero,fact);
}
