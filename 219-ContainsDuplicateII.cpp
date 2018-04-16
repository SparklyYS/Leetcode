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
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.count(nums[i]))
            {
                int diff = i - mp[nums[i]];
                if (diff <= k)
                    return true;
                mp[nums[i]] = i;
            }
            else
                mp[nums[i]] = i;
        }
        return false;
    }
};