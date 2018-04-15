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
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0, ans = -1;
        for (auto num : nums)
            sum += num;

        int lsum = 0, rsum = sum;
        for (int i = 0; i < nums.size(); ++i)
        {
            lsum += (i == 0) ? 0 : nums[i - 1];
            rsum -= nums[i];

            if (lsum == rsum)
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};