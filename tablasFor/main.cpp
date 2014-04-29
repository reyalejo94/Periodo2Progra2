#include <iostream>
#include <stdlib.h>

using namespace std;
/*
Ingresar un numero entre 1-10 y presentar la
tabla de multiplicar de 1 a 10.
Hacerlo 5 veces.*/

int main()
{
    int numero, uno, dos, tre, cua, cinc, seis, siet, ocho, nuev, diez;
    for (int i=0; i<5; i++)
    {
        do
        {
            cout<<"Ingresar numero entre 1-10...: ";
            cin>>numero;

        }while (!((numero>=1) and (numero<=10)));

    uno = numero * 1;
    dos = numero * 2;
    tre = numero * 3;
    cua = numero * 4;
    cinc = numero * 5;
    seis = numero * 6;
    siet = numero * 7;
    ocho = numero * 8;
    nuev = numero * 9;
    diez = numero * 10;

    cout<<"\nLos multiplos de " <<numero<<" del 1-10 son...: "<<uno<<", "<<dos<<", "<<tre<<", "
    <<cua<<", "<<cinc<<", "<<seis<<", "<<siet<<", "<<ocho<<", "<<nuev<<" y "<<diez<<"\n\n";

    }
    system("PAUSE");
}
