#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*
Ingresar la base y el exponennte usando un procedimiento,
luego determinar usando una funcion la potencia
y presentar en el main.
*/

int base, exp, resp;

void ingreso()
{
    cout<<"Ingresar la base del numero: ";
    cin>>base;
    cout<<"Ingresar el exponente del numero: ";
    cin>>exp;

}

int proceso(int base, int exp)
{
     resp=1;
    //int resp,base,exp;
    for(int i=1;i<=exp;i++)
    {
        resp*=base;
    }
    return resp;
}

int main()
{

    ingreso();
    proceso(base,exp);
    cout<<base<<endl;
    cout<<exp;
    cout<<"La respuesta es: "<<resp;
}
