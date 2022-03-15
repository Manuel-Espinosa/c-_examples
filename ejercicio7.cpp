#include <iostream>
#include <vector>

using namespace std;

bool isThisRigth(char x);
bool condition;
vector<char> input;
vector<string> output;

int main(int argc, char const *argv[])
{
    char x;

    for (int i = 0; i <= 10; i++)
    {
        cout << "Ingresa una letra mayuscula: ";
        cin >> x;
        isThisRigth(x);
        if (condition == false)
        {
            i -= 1;
        }
        input.push_back(x);
        system("clear");
    }

    cout << "Entrada" << endl;
    for (int j = 0; j <= input.size(); j++)
    {
        char printIn = input[j];
        cout << printIn << " ";
    }
    cout << endl;
    cout << "Salida" << endl;

    for (int k = 0; k <= output.size(); k++)
    {
        string printOut = output[k];
        cout << printOut;
    }
    cout << endl;
    return 0;
}

bool isThisRigth(char x)
{
    int xn = (int)x;

    if (xn < 65 || xn > 90)
    {
        cout << "Error. Inserte solo letras mayusculas." << endl;
        condition = false;
    }
    if (xn == 65 || xn == 69 || xn == 73 || xn == 79 || xn == 85)
    {
        output.push_back("V ");
        condition = true;
    }
    else if (xn == 89)
    {
        output.push_back("S ");
        condition = true;
    }
    else if (xn <= 64 || xn >= 91)
    {
        condition = false;
    }
    else
    {
        output.push_back("C ");
        condition = true;
    }

    return condition;
}
