#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char nombre[30];
int zona, pxh, horas, pb, pt;
double ihss;

int pedirzona()
{
    int zona;
    do
    {
        cout<<"Ingresar la zona 1,2,3: ";
        cin>>zona;
    }while((zona<1)and(zona>3));
    return zona;
}

void pagoxhora(int zona, int &pxh)
{
    if (zona==1)
        pxh=200;
    else if (zona==2)
        pxh=150;
    else
        pxh=180;
}



void ingresar(char nombre[],int &zona, int &horas)
{
    cout<<"Ingresar el nombre del empleado: ";
    cin.getline(nombre,30);
    cout<<"Ingresar horas: ";
    cin>>horas;
}

int calcular(int horas, int &pxh, int &pb, double &ihss, int &pt)
{
    pb=horas*pxh;
    if (pb>7000)
        ihss=350;
    else ihss=pb*0.035;
    pt=pb-ihss;
}

void presentar(int pxh, int pb, double ihss, int pt)
{
    cout<<"El pago por hora es de: "<<pxh<<endl;
    cout<<"El pago bruto es ede: "<<pb<<endl;
    cout<<"El ihss es de: "<<ihss<<endl;
    cout<<"El total a pagar es: "<<pt<<endl;
}

int deseacontinuar()
{
    char resp;
    do
    {
        cout<<"Desea continuar S/N... ";
        cin.get(resp);

        _flushall();
    }while((resp!='S')or(resp!='N'));
    return resp;
}

int main()
{
    char resp;
    do
    {
        ingresar(nombre,zona,horas);
        zona=pedirzona();
        pagoxhora(zona,pxh);
        calcular(horas,pxh,pb,ihss,pt);
        presentar(pxh,pb,ihss,pt);
        deseacontinuar();
    }while(resp!='N');

}
