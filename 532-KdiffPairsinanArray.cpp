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
    int findPairs(vector<int> &nums, int k)
    {
        map<int, int> mp;

        if (k < 0)
            return 0;

        for (auto num : nums)
            mp[num]++;

        int cnt = 0;
        for (auto kv : mp)
        {
            if ((!k && kv.second > 1) || (k && mp.count(kv.first + k)))
                cnt++;
        }

        return cnt;
    }
};