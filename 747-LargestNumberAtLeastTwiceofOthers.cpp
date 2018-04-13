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
    int dominantIndex(vector<int>& nums) 
    {
        int idx = -1;
        int Max = -1 , secMax = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > Max)
            {
                secMax = Max;
                Max = nums[i];
                idx = i;
                continue;
            }

            if (nums[i] > secMax)
                secMax = nums[i];
        
        }

        if (Max >= 2*secMax)
            return idx;
        else
            return -1;
    }
};