#include <iostream>
#include <string>
#include "KPeriodic.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");
    string input = "abcabcabcabcabcabc";
    cout << "Строка: " << input << endl;

    for (int K = 1; K <= input.length(); K++) 
    {
        if (IsKPeriodic(input, K)) 
        {
            cout << "Кратна " << K << endl;
        }
    }

    int nonMultiple = 8;
    if (!IsKPeriodic(input, nonMultiple)) 
    {
        cout << "Не кратна " << nonMultiple << endl;
    }

    return 0;
}
