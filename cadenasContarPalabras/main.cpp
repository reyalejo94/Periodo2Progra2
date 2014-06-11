#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//comparacion de cadenas
using namespace std;
const int t=4;
char nombre[t][30];
int num[t];

void ingresoCadenas(char nombre[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"Ingresar el nombre...: ";
        cin.getline(nombre[i],30);
    }
}

void Contarpalabras(char nombre[t][30])
{

}

void presentar(char nombre[t][30],int num[])
{
    for(int i=0;i<=t;i++)
    {
        cout<<nombre[i]<<" tiene "<<num[i]<<" palabras"<<endl;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
