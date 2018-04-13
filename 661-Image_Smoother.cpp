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
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) 
    {
        int m = M.size();
        int n = M[0].size();

        vector<vector<int>> res;

        int dx[] = {-1, 1, 0, 0, 1, -1, 1, -1};
        int dy[] = {0, 0, -1, 1, 1, -1, -1, 1};
        for (int i = 0; i < m; i++)
        {
            vector<int> tmp;
            for (int j = 0; j < n; j++)
            {
                int tot = M[i][j];
                int cnt = 1;
                for (int k = 0; k < 8; k++)
                {
                    int _x = i + dx[k];
                    int _y = j + dy[k];
                    if (_x < 0 || _x >= m || _y < 0 || _y >= n)
                        continue;
                    tot += M[_x][_y];
                    cnt++;
                }
                int ans = (int)floor( (double)tot / cnt );
                tmp.push_back(ans);
            }
            res.push_back(tmp);
        }
        
        return res;
    }
};