#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//comparacion de cadenas
using namespace std;
const int t=4;
char nombre[t][30];

void ingresoCadenas(char nombre[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"Ingresar el nombre...: ";
        cin.getline(nombre[i],30);
    }
}

void comparar(char nombre[t][30])
{
    char cadcompa[30];
    cout<<"Ingresar cadena comparar ";
    cin.getline(cadcompa,30);

    for(int i=0;i<=t;i++)
    {
        if(strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<endl;
        }
    }
}

void comparar2(char nombre[t][30])
{
    char cadcompa[30];
    cout<<endl<<"Otro tipo de comparacion ";
    cin.getline(cadcompa,30);

    for(int i=0;i<=t;i++)
    {
        if(strcmp(nombre[i],cadcompa)==0)
        {
            cout<<endl<<"Comparacion correcta con "<<nombre[i]<<endl;
        }
    }
}

int main()
{
    ingresoCadenas(nombre);
    comparar(nombre);
    comparar2(nombre);
    return 0;
}
