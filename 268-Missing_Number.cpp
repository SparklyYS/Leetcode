#include <map>
#include <set>
#include <queue>
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
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = n;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            int idx = abs(nums[i]);
            if (idx < n)
            {
                flag = ((nums[idx] == 0) ? true : flag);
                nums[idx] = -nums[idx];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                ans = i;
                break;
            }

            if (nums[i] == 0 && !flag)
            {
                ans = i;
                break;
            }
        }
        
        return ans;
    }

};