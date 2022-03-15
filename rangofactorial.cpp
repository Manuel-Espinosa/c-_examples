#include <iostream>
using namespace std;

void getFactorial(int n);

int main(int argc, char const *argv[])
{
    int a,b = 0;
    cout<<"Ingrese un numero entero ";
    cin >> a;
    cout << "ingrese un numero entero mayor al anterior ";
    cin >> b;

    for(a; a <= b; a++){
        getFactorial(a);
    }

    return 0;
}

void getFactorial(int n)
{
    long long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << n << "! = " << f << endl;
}
