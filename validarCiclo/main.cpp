#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar un numero divisible entre 5, validarlo
luego presentar si desea continua, al final presentar la suma de los numeros
*/

int main()
{
    int numero=0,cinco=0;
    char resp;
    do
    {

        do
        {
            cout<<"Escriba un numero divisible entre 5: ";
            cin>>numero;
        }while(numero%5!=0);
        _flushall();

        do
        {
            cout<<"Desea continuar S/N...:";
            cin.get(resp);
            _flushall();
        } while ((resp !='S') and (resp !='N'));

        cinco+=numero;

    }while(resp!='N');

    cout<<"La suma de los divisibles de cinco es: "<<cinco;

}
