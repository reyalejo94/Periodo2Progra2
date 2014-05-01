#include <iostream>

using namespace std;

int main()
{
    int n, ci=0, cp=0, rev;
    cout<<"Ingresar un numero: ";
    cin>>n;
    while(n!=0)
    {
        rev = n%10;
        n= n/10;
        cout<<rev;

    }

}
