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
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size(), len = n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == val)
            {
                cnt++;
                len--;
                continue;
            }

            nums[i-cnt] = nums[i];
        }
        
        return len;
    }
};