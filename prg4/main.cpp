#include <iostream>
#include <stdlib.h>
#include <time.h> /*numeros aleatorios*/

/*

INGRESAR UN NUMERO Y ESCRIBIR EN LA PANTALLA EN EL RANGO QUE SE ENCUENTRA EL NUMMERO.
RANGO
1-100
101-300
301-500
500

*/

using namespace std;

int main()
{
    int numero;
    srand(time(0));

    //cout<<"Ingresar numero entero...> ";
    //cin>>numero;
    //cout<<"\n";

    numero = 0 + rand() % (500-0); //crear un numero aletorio

    cout<<"Numero generado es..: "<<numero<<"\n\n";

    if ((numero>1) and (numero<=100))
    {
        cout<<"El numero esta en el rango de 1-100";
    }
    else if ((numero>=101) and (numero<=300))
    {
        cout<<"El numero esta en el rango de 101-300";
    }
    else if ((numero>=301) and (numero<=500))
    {
        cout<<"El numero esta en el rango de 301-500";
    }
     else if (numero>500)
    {
        cout<<"El numero es mayor a 500";
    }
    else
    {
        cout<<"El numero es negativo";
    }

    cout<<"\n\n";

    system("PAUSE");

}
