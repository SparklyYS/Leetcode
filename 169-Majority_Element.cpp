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
    int majorityElement(vector<int>& nums) 
    {
        int majorityNum = nums.size() / 2;
        
        map<int, int> mp;
        for(auto num : nums)
            mp[num]++;

        int res = -1;
        for (auto kv : mp)
        {
            if (kv.second > majorityNum)
            {
                res = kv.first;
                break;
            }
        }

        return res;
    }
};