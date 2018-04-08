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
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> ans;
        for (auto num : nums)
        {
            int idx = abs(num) - 1;
            nums[idx] = (nums[idx] > 0) ? -nums[idx] : nums[idx]; 
        }

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                ans.push_back(i+1);
        return ans;      
    }
};