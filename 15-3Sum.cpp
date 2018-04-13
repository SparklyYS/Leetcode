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
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++)
        {
            int target = -nums[i];
            int front = i+1;
            int rear = nums.size()-1;

            while (front < rear)
            {
                int sum = nums[front] + nums[rear];
                
                if (sum < target)
                    front++;
                else if (sum > target)
                    rear--;
                else
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[front]);
                    tmp.push_back(nums[rear]);
                    res.push_back(tmp);

                    while (front < rear && nums[front] == tmp[1])
                        front++;
                    
                    while (front < rear && nums[rear] == tmp[2])
                        rear--;
                }
            }

            while ((i+1) < nums.size() && nums[i+1] == nums[i])
                i++;
        }

        return res;
    }
};