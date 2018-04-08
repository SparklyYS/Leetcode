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
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> ans;

        int numzeros = 0;
        for (auto num : nums)
        {
            if (num == 0)
                numzeros++;
            else
                ans.push_back(num);
        }

        nums = ans;
        while (numzeros--)
            nums.push_back(0);
    }
};