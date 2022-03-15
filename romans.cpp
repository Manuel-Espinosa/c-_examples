#include <iostream>

using namespace std;

string toRoman(int n);

int main()
{
    int a, b;
    cout << "Ingresa incio ";
    cin >> a;
    cout << "Ingresa fin ";
    cin >> b;
    try
    {
        if (a >= 1 || b <= 3000)
        {
            for (int i = a; i <= b; i++)
            {
                cout << i << "   " << toRoman(i) << endl;
            }
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

string toRoman(int n)
{

    string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int integers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";

    for (int i = 0; i < 13; ++i)
    {
        while (n - integers[i] >= 0)
        {
            result += romans[i];
            n -= integers[i];
        }
        cout << "valor de i " << i << " valor de n " << n << " integers[i} " << integers[i] << " romans[i] " << romans[i] <<" valor de result " << result << endl;
    }

    return result;
}