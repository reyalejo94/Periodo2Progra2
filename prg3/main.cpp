#include <iostream>
#include <stdlib.h> //PARA APLICAR system("PAUSE")

/*
Ingresar el nombre del empleado las horas trabajadas y el turno luego
calcular el pago por hora, la deduccion del IHSS y total a pagar.

Turno   Pago x hora
1           200
2           300
3           370

La deduccion del IHSS es 245 si el sueldo del empleado es mayor a 7000 el
total a pagar de ingresos pago de horas-IHSS

Tiene un bono si trabaja en el turno 1 o 3 de 400 lps.

*/

using namespace std;

int main()
{
    char nombre[30];
    int horas, turno, pagoxhora, pbruto, ihss, bono, tp;

    cout<<"Ingresar nombre del empleado...:";
    cin.getline(nombre,30);

    cout<<"Horas trabajadas...:";
    cin>>horas;

    cout<<"Turno de trabajo...:";
    cin>>turno;

    if (turno==1)
    {
        pagoxhora = 200;
    }
    else if (turno==2)
    {
        pagoxhora = 300;
    }
    else if (turno==3)
    {
        pagoxhora = 370;
    }
    else
    {
        pagoxhora = 0;
    }

        if ((turno==1) or (turno==3))
        {
            bono=400;
        }
        else
        {
            bono=0;
        }

    pbruto = (pagoxhora * horas) + bono;

    if (pbruto>7000)
    {
        ihss=245;
    }
    else
    {
        ihss= 0.035 * pbruto;
    }

    tp = pbruto - ihss;

    cout<<"\n"<<"Pago por hora...: "<<pagoxhora<<"\n\n";
    cout<<"Bono...: "<<bono<<"\n\n";
    cout<<"Pago antes de la deduccion...: "<<pbruto<<"\n\n";
    cout<<"Seguro Social...: "<<ihss<<"\n\n";
    cout<<"Total a pagar...: "<<tp<<"\n\n";
    system("PAUSE");
}
