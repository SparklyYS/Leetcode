#include <map>
#include <set>
#include <queue>
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
    int maximumProduct(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();

        int maxProduct = (nums[n-3] * nums[n-2] * nums[n-1]);
        maxProduct = max(maxProduct, nums[0] * nums[1] * nums[n-1]);

        return maxProduct;
    }
};

