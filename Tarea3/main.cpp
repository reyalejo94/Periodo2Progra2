#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n, ci=0, cp=0, rev;
    cout<<"Ingresar un numero: ";
    cin>>n;
    while(n!=0)
    {
        rev = n%10;
        n= n/10;
        cout<<rev;
        if (rev % 2==0)
        {
            cp++;
        }
        else
        {
            ci++;
        }
        _flushall();
    }
    cout<<"\nContador de pares: "<<cp<<"\n";
    cout<<"Contador de impares: "<<ci<<"\n";
}
