#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar un numero entre 1-10 y presentar la
tabla de multiplicar de 1 a 10.
Hacerlo 5 veces.*/

int main()
{
    int numero, tabla;
    for (int i=0; i<5; i++)
    {
        do
        {
            cout<<"Ingresar numero entre 1-10...: ";
            cin>>numero;

        }while (!((numero>=1) and (numero<=10)));

        for (int k=1; k<=10; k++)
        {
            tabla = numero * k;
            cout<<k<<" X "<<numero<<" = "<<tabla<<"\n";
        }
    cout<<"\n\n";

    }

    system("PAUSE");
}
