#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
Generar 10 numeros aleatorios y contar los numeros que son divisibles entre 5 y obtener su promedio.
Obtener el promedio de todos los numeros ingresaados y presentar la suma.
*/
int main()
{
  int numero, c=0 , num5=0, suma5=0, promedio5=0 ;
  int sumat=0, promediot=0;
  srand(time(0));

  while(c<10)
    {

        numero = 1 + rand() % (100-1);
        cout<<"Numero generado...: "<<numero<<"\n";

        c++;
        if (numero % 5==0)
        {
            num5++;
            suma5+=numero;
        }

        sumat+=numero};
    }

    if (num5>0)
    {
      promedio5=suma5/num5;
    }

    promediot=sumat/10;

    cout<<"\nHay "<<num5<<" divisbles con 5\n";
    cout<<"El promedio de los numeros divisibles en 5 es...: "<<promedio5<<"\n";
    cout<<"La suma de todos los numeros es...: "<<sumat<<"\n";
    cout<<"El promedio de los numeros es...: "<<promediot<<"\n\n";

    system("PAUSE");
}
