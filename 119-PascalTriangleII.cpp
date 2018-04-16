#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> res(rowIndex+1, 1);

        long tmp = 1, j = 1;
        for (int i = rowIndex; i >= rowIndex / 2; --i)
        {
            tmp *= i;
            tmp /= j;

            j++;
            res[i-1] = tmp;
            res[j-1] = tmp;
        }
        return res;
    }
};