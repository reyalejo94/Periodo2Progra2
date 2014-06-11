#include <iostream>

using namespace std;
//juego del gato

const int lin=2;
const int col=2;
char num[lin][col],marca;

void rellenar(char num[lin][col])
{
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {
            num[l][c]='*';
        }
    }
}

void pedir(char num[lin][col],char marca)
{
    while(true)
    {
        int linea,columna;
        cout<<"Ingresar marca "<<marca<<endl;
        do
        {
            cout<<"Linea: ";
            cin>>linea;
        }while(!((linea>=1)and(linea<=3)));
        linea-=1;

        do
        {
            cout<<"Columna: ";
            cin>>columna;
        }while(!((columna>=1)and(columna<=3)));
        columna-=1;

        if(num[linea][columna]=='*')
        {
            num[linea][columna]=marca;
            break;
        }
        else
        {
            cout<<"Posicion ocupada"<<endl;
        }
    }
}

void ganar
{

}

void presentar(char num[lin][col])
{
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    rellenar(num);
    presentar(num);
    for(int i=0;i<3;i++)
    {
        pedir(num,'X');
        presentar(num);
        pedir(num,'0');
        presentar(num);
    }
}
