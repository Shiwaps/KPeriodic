#include "KPeriodic.h"

bool IsKPeriodic(const std::string& str, int K) 
{
    int len = str.length();
    if (len % K != 0) 
    {
        return false;
    }

    for (int i = 0; i < len; i++) 
    {
        if (str[i] != str[i % K]) 
        {
            return false;
        }
    }

    return true;
}
