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
    bool containsDuplicate(vector<int>& nums) 
    {
        map<int, int> mp;
        for (auto num : nums)
            mp[num]++;
        
        for (auto kv : mp)
            if (kv.second > 1)
                return true;
        return false;
    }
};