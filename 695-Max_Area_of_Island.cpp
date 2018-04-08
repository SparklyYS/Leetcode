#include <map>
#include <set>
#include <stack>
#include <utility>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
    bool visit[100][100];
    int a[4] = { -1, 1, 0, 0};
    int b[4] = { 0, 0, -1 ,1};
  public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        memset(visit, false, sizeof(visit));
        int MaxArea = 0;

        stack<pair<int, int>> S;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && !visit[i][j])
                {
                    int area = 0;
                    S.push(make_pair(i, j));
                    visit[i][j] = true;
                    while (!S.empty())
                    {
                        pair<int, int> p = S.top();
                        S.pop();
                        int u = p.first, v = p.second;
                        area++;
                        for (int k = 0; k < 4; k++)
                        {
                            int _u = u + a[k];
                            int _v = v + b[k];
                            if (_u < 0 || _u >= m || _v < 0 || _v >= n)
                                continue;
                            if (grid[_u][_v] == 1 && !visit[_u][_v])
                            {
                                S.push(make_pair(_u, _v));
                                visit[_u][_v] = true;
                            }
                        }
                    }
                    MaxArea = max(MaxArea, area);   
                }
            }
        }
        return MaxArea;
    }
};