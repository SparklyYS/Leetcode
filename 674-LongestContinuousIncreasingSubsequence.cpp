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
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int ans = 0, cnt = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i-1])
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        
        ans = (nums.size() > 0) ? max(ans, cnt) : 0;
        return ans;
    }
};