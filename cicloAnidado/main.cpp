#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*Generar 10 numeros de pares, validar que el numero sea par un ciclo while
    y un for para contar que sea 10 numeros*/
int main()

{
    srand(time(0));
    int numero, mayor=0;

    for(int i=0;i<10;i++)
    {
        numero = 1 + rand() % (200-1);

        while (numero % 2 !=0)
        {
            numero = 1 + rand() % (200-1);
        }

        if (numero>mayor)
        {
            mayor = numero;
        }

        cout<<"Numero generado...: "<<numero<<"\n";
    }

    cout<<"El numero mayor es...: "<<mayor<<"\n";

    system("PAUSE");


}
