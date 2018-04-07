#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

class Solution
{
  public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0, l = nums.size(); i < l; i += 2)
        {
            ans += nums[i];
        }
        return ans;
    }
};
