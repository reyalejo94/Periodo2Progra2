#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Determinar si un numero es par o impar
*/

int main()
{   int numero,numero2;
    srand(time(0));

    cout<<"Numero...: ";
    cin>>numero;
    cout<<"\n";

    if(numero % 2==0)
    {
        cout<<"EL NUMERO ES PAR";
    }
    else
    {
        cout<<"EL NUMERO ES IMPAR";
    }
    cout<<"\n\n";

    numero2= 1 + rand() % (1000-1);
    if((numero2 % 5==0) and (numero % 2==0))
    {
        cout<<"EL numero2 es "<<numero2<<" y es divisible entre 2 y 5";
    }
    else
    {
        cout<<"EL numero2 es "<<numero2<<" y no es divisible entre 2 y 5";
    }

    cout<<"\n\n";
    system("PAUSE");
}
