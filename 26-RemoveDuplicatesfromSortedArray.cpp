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
    int removeDuplicates(vector<int>& nums) 
    {
        int len = 0, distinct_num;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || nums[i] != distinct_num)
            {
                distinct_num = nums[i];
                nums[len++] = distinct_num;
            }
        }
        
        nums.resize(len);
        return len;
    }
};