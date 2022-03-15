#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 6;
    int f = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << n << "! = " << f << endl;
    int i = 1;
    f = 1;
    while (i <= n)
    {
        f *= i;
        i++;
    }
    cout << n << "! = " << f;

    return 0;
}
