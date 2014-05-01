#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*
Ingresar un Número que sea par y que se encuentre entre 1-10, luego calcular el factorial del número y presentarlo.
Preguntar si desea continuar validar respuesta.

Usar ciclo do/while para validar el número y la respuesta, para el ciclo principal usar do while también .

Ejemplo de factorial
Factorial de 5 es 1 *2*3*4*5
*/

int main()
{
    int numero, factorial;
    char resp;
    do
    {

        do
        {
            cout<<"Ingresar numero que sea par y que este entre 1-10...: ";
            cin>>numero;
        } while(!((numero>=1) and (numero<=10)and(numero%2==0)));

        _flushall();

        if(numero==2)
        {
            factorial=1*2;
        }
        else if (numero==4)
        {
            factorial=1*2*3*4;
        }
        else if (numero==6)
        {
            factorial=1*2*3*4*5*6;
        }
        else if (numero==8)
        {
            factorial=1*2*3*4*5*6*7*8;

        }
        else
        {
            factorial=1*2*3*4*5*6*7*8*9*10;
        }
        /*switch(numero)
        {
            case 2:
            factorial=2;
            break;
            case 4:
            factorial=24;
            break;
            case 6:
            factorial=720;
            break;
            case 8:
            factorial=40320;
            break;
            case 10:
            factorial=3628800;
            break;
        }*/

        cout<<"El factorial de "<<numero<<" es: "<<factorial<<"\n\n";

        do
            {
                cout<<"Desea continuar S/N...:";
                cin.get(resp);
                _flushall();
            } while ((resp !='S') and (resp !='N'));

    } while ((resp !='N'));
}
