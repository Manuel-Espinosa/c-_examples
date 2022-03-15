#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int num;
    char letter;
    int letterCode;
    int letterPos;
    bool parity;
    bool vocal;

    cout << "Ingrese un numero entero ";
    cin >> num;
    cout << "Ingrese una letra ";
    cin >> letter;
    letterCode = (int)letter;
    if (letterCode < 97 || letterCode > 122)
    {
        cout << "Error. Inserte solo letras." << endl;
        return 0;
    }

    //parity?
    if (num % 2 == 0)
    {
        parity = true;
    }
    else
    {
        parity = false;
    }
    //vocal?
    if (letterCode == 97 || letterCode == 101 || letterCode == 105 || letterCode == 111 || letterCode == 117)
    {
        vocal = true;
    }
    else
    {
        vocal = false;
    }

    //parity and vocal?
    if (parity == true && vocal == true)
    {
        int i = 30;
        cout << num << letter << " Caso A" << endl;
        while (i >= 10)
        {
            cout << " " << i << endl;
            i -= 2;
        }
        return 0;
        }

    // no parity or no vocal?

    if (parity == !false || vocal == !false)
    {
        int i = 5;
        cout << num << letter << " Caso B" << endl;
        while (i <= 11)
        {
            cout << " " << i << endl;
            i++;
        }
        return 0;
    }

    // none of above

    if (parity == false && vocal == false)
    {
        letterPos = letterCode - 96;
        int sum = 0;
        int i = 0;
        cout << num << letter << " Caso C" << endl;
        if (letterPos < num)
        {
            i = letterPos;
            while (i <= num)
            {
                sum += i;
                i++;
            }
            cout << sum << endl;
        }
        else
        {
            i = num;
            while (i <= letterPos)
            {
                sum += i;
                i++;
            }
            cout << sum << endl;
        }
    }

    return 0;
}