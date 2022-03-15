#include <iostream>
using namespace std;

void checkPrime(int n);

int main()
{
    int n = 0;
    cout << "Imprimiendo primos con ciclo for" << endl;
    for (n; n < 32; n++)
    {
        checkPrime(n);
    }
    //0 to n
    n = 0;
    cout << "Imprimiendo primos con ciclo while" << endl;
    while (n < 32)
    {
        checkPrime(n);
        n++;
    }

    return 0;
}

void checkPrime(int n)
{
    bool isPrime = true;

    // 0 and 1 are not prime
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }

    //check if n is prime
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << n << " ";
}