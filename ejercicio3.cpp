#include <iostream>

using namespace std;

void checkParity(int n);
int count = 0;

int main(int argc, char const *argv[])
{
    int s;
    cout << "indique el tamano del arreglo: ";
    cin >> s;
    int arr[s];
    bool par = true;

    for (int i = 0; i <= s; i++)
    {
        cout << "elemento " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i <= s; i++)
    {
        checkParity(arr[i]);
    }
    if (count == 0)
    {
        cout << ":(";
    }

    return 0;
}
void checkParity(int n)
{

    if (n % 2 == 0)
    {
        cout << "[" << n << "]";
        count++;
    }
}
