#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Usar un procedimiento para ingresar el nombre, las horas del empleado y el turno.
El turno solo puedeser A,B,C y debera de usar una funcion para ingresarlo y validarlo.
Calcular el pago por hora usando una funcion:
A   140
B   160
C   180
Calcular el ihss usando una funcion (el sueldo > 7000, 245; si no 3.5% del sueldo).
Elaborar un procedimiento para calcular el pago x hora, el sueldo bruto, ihss y total a pagar.
Elaborar un procedimiento para presentar los datos.
*/

int horas;
double pxh,pb, ihss, tp;
char turno, nombre[30];

char pedirturno ()
{
    int correcto=0;
    do
    {
        cout<<"Ingresar turno A,B,C: ";
        cin>>turno;
        if(turno=='A'or turno=='B'or turno=='C')
            correcto=0;
        else correcto=1;

    }while(correcto==1);
    return turno;
}

void ingreso(char nombre[],int &horas, char turno)
{
    cout<<"Ingresar nombre: ";
    cin.getline(nombre,30);
    cout<<"Ingresar horas: ";
    cin>>horas;
}

int porcentaje(char turno)
{
    switch (turno)
    {
    case 'A':
        return 140;
        break;
    case 'B':
        return 160;
        break;
    case 'C':
        return 180;
        break;
    }
}

void calcular (char turno,double pxh,double &pb, double &ihss, double &tp, int horas)
{
    pxh=porcentaje(turno);
    pb=horas*pxh;
    if (pxh>7000)
        ihss=245;
    else
        ihss=0.035*pb;
    tp=pb-ihss;

}

void presentar(double pxh, double horas,double pb, double ihss, double tp)
{
    cout<<"Pago por Horas: "<<pxh<<"\n";
    cout<<"Pago bruto: "<<pb<<"\n";
    cout<<"IHSS: "<<ihss<<"\n";
    cout<<"Total a pagar: "<<tp<<"\n";
}

int main()
{
    ingreso(nombre,horas,turno);
    turno=pedirturno();
    pxh=porcentaje(turno);
    calcular(turno,pxh,pb,ihss,tp,horas);
    presentar(pxh,horas,pb,ihss,tp);
}
