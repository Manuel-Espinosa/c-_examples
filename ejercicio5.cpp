#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> subject;
    vector<float> grade;
    string subjectName;
    float subjectGrade;
    float avg;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Ingrese nombre de la materia " << i + 1 << ": ";
        cin >> subjectName;
        subject.push_back(subjectName);
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> subjectGrade;

        try
        {
            if (subjectGrade >= 0)
            {
                grade.push_back(subjectGrade);
            }
            else
            {
                throw(subjectGrade);
            }
        }
        catch (float subjectGrade)
        {
            cout << "Ingrese solo numeros positivos" << endl;
            return 0;
        }

    }

    for (int j = 0; j <= 5; j++)
    {
        cout << subject[j] << " --- " << grade[j] << endl;
        avg += grade[j];
    }
    avg = avg / grade.size();
    cout << "Promedio: " << avg << endl;
    auto result = min_element(begin(grade), end(grade));
    ptrdiff_t pos = find(begin(grade), end(grade), *result) - begin(grade);
    if (end(grade) != result)
    {
        cout << "La calificacion mas baja es:  " << *result << " en " << subject[pos] << endl;
    }
    return 0;
}
