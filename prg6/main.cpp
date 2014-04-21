#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout<<"Numero...: ";
    cin>>numero;
    cout<<"\n";

    if (numero<0)
    {
        cout<<"EL NUMERO ES NEGATIVO!!!";
    }
    else if (numero==0)
    {
        cout<<"EL NUMERO ES CERO!!!";
    }
    else
    {
        cout<<"EL NUMERO ES POSITIVO!!!";
    }

    cout<<"\n\n";
    }
