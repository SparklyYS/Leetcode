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
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int start = 0, finish = -1;
        int n = nums.size();
        int Max = INT_MIN, Min = INT_MAX;

        for (int i = 0, j = n - 1; j >= 0; i++, j--)
        {
            Max = max(Max, nums[i]);
            if (nums[i] != Max)
                finish = i;

            Min = min(Min, nums[j]);
            if (nums[j] != Min)
                start = j;

        } 

        return finish-start+1;
    }
};