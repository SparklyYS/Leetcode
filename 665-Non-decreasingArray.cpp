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

class Solution
{
  public:
    bool checkPossibility(vector<int> &nums)
    {
        int modify = 0;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
            {
                if (modify++)
                    return false;

                (i < 2 || nums[i-2] <= nums[i]) ? nums[i-1] = nums[i] : nums[i] = nums[i-1];
            }
        }

        return true;
    }
};