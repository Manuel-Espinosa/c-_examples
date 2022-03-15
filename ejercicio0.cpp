#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int ammount;
    int total;

    cout << "Ingrese monto de venta: ";
    cin >> ammount;

    if (ammount < 500)
    {
        cout << ammount;
    }
    else if (ammount >= 500 && ammount <= 1000)
    {
        total = ammount - (ammount * 0.05);
        cout << total;
    }else if (ammount >= 1000 && ammount <= 7000)
    {
        total = ammount - (ammount * 0.11);
        cout << total;
    }else if (ammount >= 7000 && ammount <= 15000)
    {
        total = ammount - (ammount * 0.18);
        cout << total;
    }else if (ammount >= 15000)
    {
        total = ammount - (ammount * 0.25);
        cout << total;
    }

    return 0;
}
