#include <iostream>

using namespace std;
/*
Ingresar numeros enteros positivosa una matris de
5 columnas por 6 lineas, dejando la ultima lineas
reservada para la suma de las columnas.
*/

const int lin=5;
const int col=4;
int num[lin][col];

void ingreso(int num[lin][col])
{
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col-1;c++)
        {
            cout<<"Numero["<<l<<","<<c<<"]...:";
            cin>>num[l][c];
        }
    }
}

/*void sumar (int num[lin][col])
{
    for(int c=0;c<=col;c++)
    {
        num[lin][c]=0;
        for(int l=0;l<=lin-1;l++)
        {
            num[lin][c]+=num[l][c];
        }
    }
}*/

void mayor (int num[lin][col])
{
    //int temp;
    for(int l=0;l<=lin;l++)
    {
        num[l][col]=0;
        for(int c=0;c<=col-1;c++)
        {
            //num[l][col]>=num[l][c];
            if (num[l][col]<num[l][c])
            {
                num[l][col]=num[l][c];
            }
        }
    }
    //return temp;
}

void presentar(int num[lin][col])
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
    ingreso(num);
    //sumar(num);
    mayor(num);
    presentar(num);
}
