#include <iostream>

using namespace std;

const int lin=4;
const int col=5;
int num [lin][col];

void rellenar(int num[lin][col])
{
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col;c++)
        {
            cout<<"[ "<<l<<"] "<<"[ "<<c<<"]: ";
            cin>>num[l][c];
        }
    }
}

void procedimineto (int num[lin][col])
{
    int Temp=0, promedio=0,suma=0;
    for(int l=0;l<=lin;l++)
    {
        for(int c=0;c<=col-1;c++)
        {
            if (Temp<num[l][c])
            {
                Temp=num[l][c];
            }
            suma+=num[l][c];
            promedio=suma/col;
            num[l][col]=promedio-Temp;
        }
        cout<<"suma"<<suma<<endl;
        cout<<"promedio"<<promedio<<endl;
        cout<<"Temp"<<Temp<<endl;
    }
}

void presentar(int [lin][col])
{
    for(int l=0;l<=lin;l++)
    {
        cout<<"El total del promedio, menos el menor de la linea ["<<l<<"] es "<<num[l][col]<<endl;
    }
}

int main()
{
    rellenar(num);
    procedimineto(num);
    presentar(num);
}
