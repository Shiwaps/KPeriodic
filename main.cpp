#include <iostream>
#include <string>
#include "KPeriodic.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus");
    string input = "abcabcabcabcabcabc";
    cout << "������: " << input << endl;

    for (int K = 1; K <= input.length(); K++) 
    {
        if (IsKPeriodic(input, K)) 
        {
            cout << "������ " << K << endl;
        }
    }

    int nonMultiple = 8;
    if (!IsKPeriodic(input, nonMultiple)) 
    {
        cout << "�� ������ " << nonMultiple << endl;
    }

    return 0;
}
