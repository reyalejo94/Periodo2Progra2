#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Ingresar un numero random, 1-350 y determinar el rango en el que se encuentra

1-50
51-120
120-200
200-350
*/
int main()
{
    srand(time(0));
    int numero;
    numero = 1 + rand() % (350-1);

    cout<<"El Numero Generado es: "<<numero<<"\n\n";

if ((numero>=1)and(numero<=50))
   {
    cout<<"El numero esta en el rango de 1-50...";
   }
else if ((numero>=51)and(numero<=120))
   {
    cout<<"El numero esta en el rango de 51-120...";
   }
else if ((numero>=121)and(numero<=200))
   {
    cout<<"El numero esta en el rango de 121-200...";
   }
else
   {
    cout<<"El numero esta en el rango de 201-350...";
   }

cout<<"\n\n";

system("PAUSE");

}
