#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Ingrese edad: ";
    cin >> age;
    if (age <= 3)
    {
        cout << "BEBE" << endl;
    }
    else if (age <= 14)
    {
        cout << "NINO" << endl;
    }
    else if (age <= 18)
    {
        cout << "JOVEN" << endl;
    }
    else if (age <= 65)
    {
        cout << "ADULTO" << endl;
    }
    else if (age > 65)
    {
        cout << "ADULTO 3RA" << endl;
    }
    return 0;
}
