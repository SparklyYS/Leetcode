#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int cnt = 0, plots = flowerbed.size();

        if (cnt == n)
            return true;

        for (int i = 0; i < plots; i++)
        {
            if (flowerbed[i] == 0)
            {
                int flag = (i == 0) ? 0 : flowerbed[i-1];
                flag |= (i == plots-1) ? 0 : flowerbed[i+1];
                
                if (!flag)
                {
                    flowerbed[i] = 1;
                    cnt++;
                }
            }

            if (cnt == n)
                return true;
        }
        return false;
    }
};