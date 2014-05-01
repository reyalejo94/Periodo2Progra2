#include <iostream>

using namespace std;

int main()
{
    int n;
    int rev;
    do
    {
        cout<<"Ingresar un numero: ";
        cin>>n;
    } while (n<=0);

    rev=n%10;
    n=n/10;
    cout<<rev;
    rev=n%10;
    cout<<rev;
}
