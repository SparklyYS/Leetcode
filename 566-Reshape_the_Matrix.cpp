#include <map>
#include <set>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
  public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int m = nums.size();
        int n = nums[0].size();

        if (m * n != r * c)
            return nums;

        vector<vector<int>> res;
        vector<int> tmp;

        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int num = nums[i][j];
                tmp.push_back(num);
                cnt++;
                if (cnt == c)
                {
                    res.push_back(tmp);
                    tmp.clear();
                    cnt = 0;
                }
            }
        }
        return res;
    }
};