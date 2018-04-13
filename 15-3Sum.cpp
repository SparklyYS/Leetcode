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
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> s;
        vector<vector<int>> res;
        
        if (nums.size() < 3)
            return res;

        sort(nums.begin(), nums.end());
       
        for (int i = 0; i < nums.size()-2; i++)
        {
            for (int j = i+1; j < nums.size()-1; j++)
            {
                if (nums[i] + nums[j] > 0)
                    break;

                int target = 0 - (nums[i] + nums[j]);
                if (binary_search(nums.begin()+j+1, nums.end(), target))
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(target);
                    sort(tmp.begin(), tmp.end());
                    s.insert(tmp);
                }
            }

            if (nums[i] > 0)
                break;
        }
        
        for (auto ele : s)
            res.push_back(ele);
    
        return res;
    }
};