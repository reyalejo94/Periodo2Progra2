#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y presentar al final del ciclo
el numero mayor.
*/

int main()
{   int c=0, mayor=0, numero;
    int menor =  10000000000000;

    while (c<5)
    { cout<<"Ingresar un numero...> ";
      cin>>numero;

      if (numero>mayor)
      {
      mayor = numero;
      }

      if (numero<menor)
      {
        menor = numero;
      }

      c++;
    }

    cout<<"Mayor de todos los numeros es "<<mayor<<"\n";
    cout<<"Menor de todos los numeros es "<<menor<<"\n";
}
