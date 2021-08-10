#include <vector>
#include "func.h"

int func(int size)
{
    std::vector<int> v;
    int res = 0;

    for (int i = 0; i < size; i++)
    {
        v.push_back(i);
    }
    for (int n : v)
    {
        res += n;
    }
    return res;
}

