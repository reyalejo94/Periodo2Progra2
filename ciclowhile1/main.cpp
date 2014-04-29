#include <iostream>
#include <stdlib.h>

using namespace std;

/* estructuras de repeticion
Ingresar  5 nummeros y presentar al final del ciclo la suma
de los numeros ingresados.
*/

int main()
{
    int num, c=0, suma=0, mayor50=0, suma50=0;
    while(c<5)
    {
        cout<<"Ingresar un numero...: ";
        cin>>num;

        if (num>50)
        {
            mayor50++;
            suma50+=num;
        }

        c++; //c = c + 1, se suman las veces que se repite el ciclo
        suma+=num; //suma los numeros ingresados
    }

    cout<<"La suma de los numeros es...: "<<suma<<"\n";
    cout<<"Los numeros mayores a 50 son...: "<<mayor50<<"\n";
    cout<<"La suma de los numeros mayores a 50 es...: "<<suma50<<"\n";

    system("PAUSE");
}
