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
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();

        bool flag = true;
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                flag = (matrix[i][j] != matrix[i-1][j-1]) ? false : true;
                if (!flag)
                    return false;
            }
        }
        return true;
    }
};
