#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;

    cout << "valor de inicio";
    cin >> a;
    cout << "Valor de termino";
    cin >> b;

    for (a; a <= b; a++)
    {
        cout << a << endl;
    }
    return 0;
}
