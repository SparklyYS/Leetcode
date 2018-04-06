#include <map>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

class Solution
{

  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int remain = target - nums[i];
            if (mp.find(remain) != mp.end())
            {
                res.push_back(mp[remain]);
                res.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};

int main()
{
    return 0;
}
