#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num, c=0, cpar=0, cimpar=0;
    int  ppar, pimpar;
    int spar=0;
    int simpar=0;

    while(c<5)

    {   cout<<"Ingresar un numero...: ";
        cin>>num;

        c++;

            if(num % 2==0)
            {
                cpar++;
                spar+=num;
            }

            else
            {
                cimpar++;
                simpar+=num;
            }

    }

    ppar = spar / cpar;
    pimpar = simpar / cimpar;

    cout<<"Hay "<<cpar<<" numeros pares\n";
    cout<<"Hay "<<cimpar<<" numeros impares\n";
    cout<<"El promedio de los numeros pares es "<<ppar<<"\n";
    cout<<"El promedio de los numeros impares es "<<pimpar<<"\n";


system("PAUSE");
}
