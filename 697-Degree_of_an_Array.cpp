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
    int findShortestSubArray(vector<int>& nums) 
    {
        map<int, int> mp;
        map<int, int > deg;

        int idx = 1, maxdeg = 1;
        int res = 1;
        for (auto num : nums)
        {
            if (mp[num] == 0)
            {
                mp[num] = idx;
                deg[num] = 1;
            }
            else
            {
                deg[num] += 1;
                if (deg[num] > maxdeg)
                {
                    maxdeg = deg[num];
                    res = idx-mp[num]+1;
                }
                if (deg[num] == maxdeg)
                    res = min(res, idx-mp[num]+1);
            }
            idx++;
        }
        return res;
    }
};