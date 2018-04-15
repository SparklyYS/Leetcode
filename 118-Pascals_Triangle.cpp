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

class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        vector<int> lastrow;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row;
            if (i != 0)
                lastrow = res[i - 1];

            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                {
                    row.push_back(1);
                    continue;
                }

                int num = lastrow[j - 1] + lastrow[j];
                row.push_back(num);
            }
            res.push_back(row);
        }

        return res;
    }
};