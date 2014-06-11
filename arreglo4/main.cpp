#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
Generar 10 numeros comprendidos entre 1-1000,
luego contar cuantas cifras tiene cada uno de los numeros
*/

const int tam=9;
int numero[tam],cifras[tam];

void ingreso(int numero[])//procedimiento
{
    srand(time(0));
    for(int i=0;i<=tam;i++)
    {
        numero[i] = 1 + rand() % (1000-1);
    }
}


int contarcifras(int numero)//funcion
{
    int cf=1;
    while (numero>10)
    {
        numero=numero/10;
        cf++;
    }
    return cf;
}

void calcular(int numero[],int cifras[])
{
    for(int i=1; i<=tam;i++)
    {
        cifras[i]=contarcifras(numero[i]);
    }
}

int pres_revez(int numero[])//funcion
{
    int xnum=0,xnum2;
    for (int i=1; i<=tam;i++)
    {
        cout<<"Numero "<<numero[i]<<" tiene ";
        xnum2=numero[i];
        while (xnum2>=10)
        {
            xnum=xnum2%10;
            xnum2=xnum2/10;
            cout<<xnum;
        }
        cout<<xnum2<<"cifras"<<endl;

    }
}

void presentar(int numero[],int cifras[])
{
    for(int i=1; i<=tam;i++)
    {
        cout<<"El numero "<<numero[i]<<" tiene "<<cifras[i]<<" cifras"<<endl;
    }
}

int main()
{
    ingreso(numero);
    calcular(numero,cifras);
    presentar(numero,cifras);
    cout<<endl;
    pres_revez(numero);

}
