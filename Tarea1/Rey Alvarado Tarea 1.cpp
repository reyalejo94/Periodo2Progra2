#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*Ingresar el mes , el día , el año y determinar si la fecha esta correcta.
se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.
*/

int main()
{
    int mes, dia, year;
    cout<<"Ingresar mes en digitos...: ";
    cin>>mes;
    cout<<"Ingresar dia en digitos...: ";
    cin>>dia;
    cout<<"Ingresar año en digitos...: ";
    cin>>year;

    if ((mes>=1)and(mes<=12))
    {
        cout<<"El mes esta correcto!\n";
    }
    else
    {
        cout<<"El mes esta incorrecto!\n";
    }

    if ((mes=1)or(mes=3)or(mes=5)or(mes=7)or(mes=8)or(mes=10)or(mes=12))
    {
        if ((dia>=1)and(dia<=31))
        {
        cout<<"El dia esta correcto!\n";
        }
        else
        {
        cout<<"El dia esta incorrecto!\n";
        }
    }
    else if ((mes=4)or(mes=6)or(mes=9)or(mes=11))
    {
        if ((dia>=1)and(dia<=30))
        {
        cout<<"El dia esta correcto!\n";
        }
        else
        {
        cout<<"El dia esta incorrecto!\n";
        }
    }
    else
    {
       if ((dia>=1)and(dia<=28))
        {
        cout<<"El dia esta correcto!\n";
        }
        else
        {
        cout<<"El dia esta incorrecto!\n";
        }
    }

    if (year>0)
    {
        cout<<"El año esta correcto!\n";
        }
        else
        {
        cout<<"El año esta incorrecto!\n";
        }

    system("PAUSE");
}
