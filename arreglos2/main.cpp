#include <iostream>

using namespace std;
/*
Ingresar 50 numero de arreglode enteros,
luego elaborar una funcion para devolver el numero mayor,
una funcion para devolver el numero de pares que hay en el arreglo.
*/

const int tam=4;
int numero[tam];
void ingresar (int numero[])
{
    for(int i=0;i<=tam;i++)
    {
        cout<<"Ingresar el numero["<<i<<"]..:";
        cin>>numero[i];
    }
}

int mayor (int numero[])
{
    int maxi=0;
    for(int i=0;i<=tam;i++)
    {
        if (numero[i]>maxi)
            maxi=numero[i];
    }
    return maxi;
}

int pares(int numero[])
{
    int xpar=0;
    for(int i=0;i<=tam;i++)
    {
        if(numero[i]%2==0)
            xpar++;
    }
    return xpar;
}

int menor (int numero[])
{
    int mini=numero[0];
    for(int i=0;i<=tam;i++)
    {
        if (numero[i]<mini)
            mini=numero[i];
    }
    return mini;
}

int main()
{
    int xmax=0,xpar=0,mini=0;
    ingresar(numero);
    xmax=mayor(numero);
    mini=menor(numero);
    xpar=pares(numero);
    cout<<"Numero mayor del arreglo es "<<xmax<<endl;
    cout<<"Numero menor del arreglo es "<<mini<<endl;
    cout<<"El numero de pares es "<<xpar<<endl;
}
