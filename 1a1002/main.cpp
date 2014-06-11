#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

const int tam=9;
int numero[tam];

void ordenar_numeros(int arreglo[], int lon)
{
        int Temp;
        for(int i=0;i<lon;i++)
        for(int j=0;j<lon-1;j++)
        if(arreglo[j]<arreglo[j+1]){
        Temp=arreglo[j];
        arreglo[j]=arreglo[j+1];
        arreglo[j+1]=Temp;}

        for(int i=0;i<lon;i++)
        cout<<arreglo[i]<<endl;
}

void ordenar_numeros2(int arreglo[], int lon)
{
        int Temp;
        for(int i=0;i<lon;i++)
        for(int j=0;j<lon-1;j++)
        if(arreglo[j]>arreglo[j+1]){
        Temp=arreglo[j];
        arreglo[j]=arreglo[j+1];
        arreglo[j+1]=Temp;}

        for(int i=0;i<lon;i++)
        cout<<arreglo[i]<<endl;
}

void ingreso(int numero[])
{
    srand(time(0));

    for(int i=0;i<=tam;i++)
    {
        numero[i] = 1 + rand() % (100-1);
        cout<<"Numero "<<i+1<<": "<<numero[i]<<endl;
    }

}

main(){

    int lon=10;
    //cout<<"El numero de numeros a capturar: ";
    //cin>>lon;
    int arr[lon];
    ingreso(numero);
    for(int i=0;i<lon;i++)
    {
        arr[i]=numero[i];
    }
    cout<<endl<<"Numeros ordenados descendente: "<<endl;
    ordenar_numeros(arr,lon);
    cout<<endl<<"Numeros ordenados ascendente: "<<endl;
    ordenar_numeros2(arr,lon);
    system("pause");
        }
