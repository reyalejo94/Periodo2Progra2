#include <iostream>

using namespace std;

void ingresar (int arreglo[],int lon)
{
    int n;
    for(int i=0;i<lon,i++)
    {
        n=1 + rand()%(100-1);
        arreglo[i]=n;
    }
}

int main()
{
    srand(time(0));
    int lon;
    cout<<"Ingresar el numero a

}
