#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
Ingresar un numero que este entre 50 y 100.
Hacerlo 5 veces.
*/

int main()
{
    srand(time(0));
    int numero;
    for (int i=0; i<5; i++)
    {
      cout<<"Ingresar numero entre 50-100...: ";
      cin>>numero;

        while (!((numero>=50) and (numero<=100)))
        {
            cout<<"Ingresar numero entre 50-100...: ";
            cin>>numero;
        }
     }


}
