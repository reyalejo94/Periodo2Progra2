#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado las ventas y el turno.
Validar el turno que sea 1,2,3.)5%,7%,6%
Elaborar una funcion para que nos devuelva el % de las ventas
Elaborar procedimiento para calcular el % de comision, la comision,
el ihss y total a pagar.
*/

int pedirturno ()
{
    int turno;
    do
    {
        cout<<"Ingresar turno 1,2,3: ";
        cin>>turno;
    }while((turno<1)and(turno>3));
    return turno;
}
void ingreso(char nombre[],int &ventas, int &turno)
{
    cout<<"Ingresar nombre: ";
    cin.getline(nombre,30);
    cout<<"Ingresar ventas: ";
    cin>>ventas;
    turno=pedirturno();

}

double porcomis(int turno)
{
    switch (turno)
    {
    case 1:
        return 0.05;
        break;
    case 2:
        return 0.07;
        break;
    default:
        return 0.06;
        break;
    }
}

void calcular(int turno, int ventas, double &pc, double &comis, double &ihss, double &tp)
{
    pc=porcomis(turno);
    comis=pc*ventas;
    if (comis>7000)
        ihss=245;
    else
        ihss=0.035*comis;
    tp=comis-ihss;
}

void presentar(double &pc, double &comis, double &ihss, double &tp)
{
    cout<<"% Comision: "<<pc<<"\n";
    cout<<"Comision: "<<comis<<"\n";
    cout<<"IHSS: "<<ihss<<"\n";
    cout<<"Total en ventas: "<<tp<<"\n";
}

char pedirsiono ()
{
    _flushall();
    char resp;
    do
        {
            cout<<"Desea continuar S/N...:";
            cin.get(resp);
            _flushall();
        } while ((resp !='S') and (resp !='N'));
    return resp;
    cout<<"\n\n";
}

int main()
{
    char nombre[30],resp;
    int turno, ventas;
    double pc,comis,ihss,tp;
    do
    {
       ingreso(nombre,ventas,turno);
    porcomis(turno);
    calcular(turno,ventas,pc,comis,ihss,tp);
    presentar(pc,comis,ihss,tp);
    resp=pedirsiono ();
    }while(resp !='N');

}
