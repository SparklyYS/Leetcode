#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
  public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        bool flag = false;
        int i = 0, len = bits.size();
        while (i < len)
        {
            if (bits[i] == 0)
            {
                flag = true;
                i++;
            }
            else
            {
                flag = false;
                i += 2;
            }
        }

        return flag;
    }
};