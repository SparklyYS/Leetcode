#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int MaxLen = 0;
        int cnt = 0;
        for (auto num : nums)
        {
            cnt = ((num == 1) ? cnt + 1 : 0);
            MaxLen = max(MaxLen, cnt); 
        }
        return MaxLen;
    }
};