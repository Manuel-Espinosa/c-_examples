#include <iostream>

using namespace std;

bool checkParity(int n);

bool checkVocal(char x);
int num;
char letter;
int letterCode;
int letterPos;
bool parity;
bool vocal;

int main(int argc, char const *argv[])
{

    cout << "Ingrese un numero entero ";
    cin >> num;
    cout << "Ingrese una letra ";
    cin >> letter;

    //parity?
    checkParity(num);
    //vocal?
    checkVocal(letter);



    //parity and vocal?
    /*
    Case A: If a letter is vocal AND if a number has parity
    Print numbers from 30 to 10 with a while loop
    */
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
    /*
    Case B: If a letter is not vocal OR if a number has not parity
    Print numbers from 5 to 11 with a while loop
    */

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
    /*
    Case C: If a letter is not vocal AND if a number has not parity
    Print the sum of the numbers from letter position to number 
    */

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

bool checkParity(int n)
{

    if (n % 2 == 0)
    {
        parity = true;
    }
    else
    {
        parity = false;
    }
    return parity;
}

bool checkVocal(char x)
{
    letterCode = (int)x;

    if (letterCode < 97 || letterCode > 122)
    {
        cout << "Error. Inserte solo letras." << endl;
        return 0;
    }
    if (letterCode == 97 || letterCode == 101 || letterCode == 105 || letterCode == 111 || letterCode == 117)
    {
        vocal = true;
    }
    else
    {
        vocal = false;
    }

    return vocal;


}