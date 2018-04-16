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
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += nums[i];
        
        int n = nums.size();
        double ans = (double) sum / k;
        for (int i = 1; i < n-k+1; i++)
        {
            sum -= nums[i-1];
            sum += nums[i-1+k];

            ans = max(ans, (double) sum / k);
        }
        return ans;
    }
};