#include <iostream>

using namespace std;

string isUnit(int n);
string isDozen(int n);
string isHundred(int n);
string isThousand(int n);
int split(int n);

int main(int argc, char const *argv[])
{
    int begin, end;

    cout << "Ingrese inicio del rango ";
    cin >> begin;
    cout << "Ingrese fin del rango: ";
    cin >> end;

    if (begin >= 1 && end <= 3000)
    {
        for (int i = begin; i <= end; i++)
        {
            cout << isUnit(i);
            cout << endl;
            cout << isDozen(i);
            cout << endl;
            cout << isHundred(i);
            cout << endl;
            cout << isThousand(i);
            cout << endl;
        }
    }

    return 0;
}

string isUnit(int n)
{
    string unit;
    if (n <= 10)
    {
        if (n == 1)
        {
            unit = "I";
        }
        else if (n == 2)
        {
            unit = "II";
        }
        else if (n == 3)
        {
            unit = "III";
        }
        else if (n == 4)
        {
            unit = "IV";
        }
        else if (n == 5)
        {
            unit = "V";
        }
        else if (n == 6)
        {
            unit = "VI";
        }
        else if (n == 7)
        {
            unit = "VII";
        }
        else if (n == 8)
        {
            unit = "VIII";
        }
        else if (n == 9)
        {
            unit = "IX";
        }
        else if (n == 10)
        {
            unit = "X";
        }
    }
    return unit;
}

string isDozen(int n)
{
    string dozen;
    if (n >= 11 && n < 100)
    {
        dozen = "X" + isUnit(split(n));

        //20 to 29

        if (n == 20)
        {
            dozen = "XX";
        }
        if (n >= 21 && n <= 29)
        {
            dozen = "XX" + isUnit(split(n));
        }

        //30 to 39
        if (n == 30)
        {
            dozen = "XXX";
        }
        if (n >= 31 && n <= 39)
        {
            dozen = "XXX" + isUnit(split(n));
        }

        //40 to 49
        if (n == 40)
        {
            dozen = "XL";
        }
        if (n >= 41 && n <= 49)
        {
            dozen = "XL" + isUnit(split(n));
        }

        //50 to 59
        if (n == 50)
        {
            dozen = "L";
        }
        if (n >= 51 && n <= 59)
        {
            dozen = "L" + isUnit(split(n));
        }

        //60 to 69
        if (n == 60)
        {
            dozen = "LX";
        }
        if (n >= 61 && n <= 69)
        {
            dozen = "LX" + isUnit(split(n));
        }

        //70 to 79

        if (n == 70)
        {
            dozen = "LXX";
        }
        if (n >= 71 && n <= 79)
        {
            dozen = "LXX" + isUnit(split(n));
        }

        //80 to 89

        if (n == 80)
        {
            dozen = "LXXX";
        }
        if (n >= 81 && n <= 89)
        {
            dozen = "LXXX" + isUnit(split(n));
        }

        //90 to 99
        if (n == 90)
        {
            dozen = "XC";
        }
        if (n >= 91 && n <= 99)
        {
            dozen = "XC" + isUnit(split(n));
        }
    }
    return dozen;
}

string isHundred(int n)
{
    string hundred;

    if (n >= 100 && n <= 999)
    {
        int i = n % 100;

        //100 to 199
        if (n == 100)
        {
            hundred = "C";
        }
        if (n >= 101 && n <= 110)
        {
            hundred = "C" + isUnit(i);
        }
        if (n >= 111 && n <= 199)
        {
            hundred = "C" + isDozen(i);
        }

        //200 to 299

        if (n == 200)
        {
            hundred = "CC";
        }
        if (n >= 201 && n <= 210)
        {
            hundred = "CC" + isUnit(i);
        }
        if (n >= 211 && n <= 299)
        {
            hundred = "CC" + isDozen(i);
        }

        //300 to 399

        if (n == 300)
        {
            hundred = "CCC";
        }
        if (n >= 301 && n <= 310)
        {
            hundred = "CCC" + isUnit(i);
        }
        if (n >= 311 && n <= 399)
        {
            hundred = "CCC" + isDozen(i);
        }

        //400 to 499

        if (n == 400)
        {
            hundred = "CD";
        }
        if (n >= 401 && n <= 410)
        {
            hundred = "CD" + isUnit(i);
        }
        if (n >= 411 && n <= 499)
        {
            hundred = "CD" + isDozen(i);
        }

        //500 to 599
        if (n == 500)
        {
            hundred = "D";
        }
        if (n >= 501 && n <= 510)
        {
            hundred = "D" + isUnit(i);
        }
        if (n >= 511 && n <= 599)
        {
            hundred = "D" + isDozen(i);
        }

        //600 to 699

        if (n == 600)
        {
            hundred = "DC";
        }
        if (n >= 601 && n <= 610)
        {
            hundred = "DC" + isUnit(i);
        }
        if (n >= 611 && n <= 699)
        {
            hundred = "DC" + isDozen(i);
        }

        //700 to 799
        if (n == 700)
        {
            hundred = "DCC";
        }
        if (n >= 701 && n <= 710)
        {
            hundred = "DCC" + isUnit(i);
        }
        if (n >= 711 && n <= 799)
        {
            hundred = "DCC" + isDozen(i);
        }

        //800 to 899
        if (n == 800)
        {
            hundred = "DCCC";
        }
        if (n >= 801 && n <= 810)
        {
            hundred = "DCCC" + isUnit(i);
        }
        if (n >= 811 && n <= 899)
        {
            hundred = "DCCC" + isDozen(i);
        }

        //900 to 999
        if (n == 900)
        {
            hundred = "CM";
        }
        if (n >= 901 && n <= 910)
        {
            hundred = "CM" + isUnit(i);
        }
        if (n >= 911 && n <= 999)
        {
            hundred = "CM" + isDozen(i);
        }
    }

    return hundred;
}

string isThousand(int n)
{
    string thousand;
    if (n >= 1000 && n <= 3000)
    {
        int i = n % 1000;

        //1000 to 1999
        if (n == 1000)
        {
            thousand = "M";
        }
        if (n >= 1001 && n <= 1010)
        {
            thousand = "M" + isUnit(i);
        }
        if (n >= 1011 && n <= 1099)
        {
            thousand = "M" + isDozen(i);
        }
        if (n >= 1100 && n <= 1999)
        {
            thousand = "M" + isHundred(i);
        }

        //2000 to 2999
         if (n == 2000)
        {
            thousand = "MM";
        }
        if (n >= 2001 && n <= 2010)
        {
            thousand = "MM" + isUnit(i);
        }
        if (n >= 2011 && n <= 2099)
        {
            thousand = "MM" + isDozen(i);
        }
        if (n >= 2100 && n <= 2999)
        {
            thousand = "MM" + isHundred(i);
        }

        //3000 

        if(n == 3000){
            thousand = "MMM";
        }
    }
    return thousand;
}

int split(int n)
{
    int second = n % 10;
    return second;
}
