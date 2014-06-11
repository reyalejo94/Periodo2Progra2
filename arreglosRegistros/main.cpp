#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct alumno
{
    char nombre[30], obs[15];
    int na,ne,nf;
};
const int n=4;
alumno alum[n];
alumno maxalumn;

void ingreso (alumno alum[])
{

    for (int i=0;i<=n;i++)
    {_flushall();
        cout<<"Ingresar el nombre del alumno: ";
        cin.getline(alum[i].nombre,30);
        cout<<"Ingresar la nota del Examen: ";
        cin>>alum[i].ne;
        cout<<"Ingresar la nota Acumulada: ";
        cin>>alum[i].na;
    }
}

void calcular (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        alum[i].nf=alum[i].na+alum[i].ne;
        if(alum[i].nf>=60)
        {
            strcpy(alum[i].obs,"APROBADO");
        }
        else
        {
            strcpy(alum[i].obs,"REPROBADO");
        }
    }
}

void presentar1 (alumno alum)
{
    cout<<"Alumno "<<alum.nombre<<" nota final es "<<alum.nf<<endl;
}

void presentar2 (alumno alum[])
{
    for (int i=0;i<=n;i++)
    {
        presentar1(alum[i]);
    }
}

alumno mayorlaum (alumno alum[])
{   alumno temp;
    temp=alum[0];
    for (int i=0;i<=n;i++)
    {
        if (temp.nf<alum[i].nf)
        {
            temp=alum[i];
        }
    }
    return temp;
}

int main()
{
    ingreso(alum);
    calcular(alum);
    presentar2(alum);
    maxalumn=mayorlaum(alum);
    cout<<"**********Mayor**********"<<endl;
    presentar1(maxalumn);
}
