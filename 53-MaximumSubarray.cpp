#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, res = INT_MIN;
        for (auto num : nums)
        {
            sum = max(num, sum + num);
            res = max(res, sum);
        }
        return res;
    }
};
