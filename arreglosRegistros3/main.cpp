#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
Elaborar un procedimiento para ingresar el nombre
y las ventas de todos los empleados.
Calcular la comision y el seguro social usando una
funcion para cada uno de ellos.
La comision se calcula asi:
1-20k      3%
20k-50k    4%
50k-...    5%
Hacer los calculos de todo el arreglo de registros
usando un procedimiento.
Presentar los datos usando un procedimiento.
*/
struct emple
{
    char nombre[30];
    double ventas[3],sumaventa, comis,ihss,tp;
};
const int n=4;
emple emplex[n];

void ingreso (emple emplex[])
{

    for (int i=0;i<=n;i++)
    {_flushall();
        cout<<"Ingresar el nombre del empleado: ";
        cin.getline(emplex[i].nombre,30);
        for (int k=0;k<=3;k++)
        {
            cout<<"Ingresar la ventas del empleado["<<k<<"]: ";
            cin>>emplex[i].ventas[k];
        }
    }
}

double seguro (double pb)
{
    if (pb>7000)
        return 245;
    else
        return pb*0.035;
}

double comision(double sumaventas)
{
    if(sumaventas<=20000)
        return 0.03;
    else if (sumaventas<=50000)
        return 0.04;
    else if (sumaventas>50000)
        return 0.05;
    else
        return 0;
}

double suma (double ventas[])
{
    double xsuma=0;
    for (int i=0;i<=3;i++)
    {xsuma=ventas[i];}
    return xsuma;
}

void calcular (emple emplex[])
{
    for (int i=0;i<=n;i++)
    {
        emplex[i].sumaventa=suma(emplex[i].ventas);
        emplex[i].comis=emplex[i].sumaventa*comision(emplex[i].sumaventa);
        emplex[i].ihss=seguro(emplex[i].comis);
        emplex[i].tp=emplex[i].comis-emplex[i].ihss;
    }
}

void presentar (emple emplex[])
{
    for (int i=0;i<=n;i++)
    {
        cout<<"Empleado "<<emplex[i].nombre<<endl;
        cout<<"Total ventas "<<emplex[i].sumaventa<<endl;
        cout<<"Comision"<<emplex[i].comis<<endl;
        cout<<"IHSS "<<emplex[i].ihss<<endl;
        cout<<"Total a pagar "<<emplex[i].tp<<endl<<endl;
    }
}

int main()
{
    ingreso(emplex);
    calcular(emplex);
    presentar(emplex);
}
