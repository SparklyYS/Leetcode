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
    bool judgeCircle(string moves) 
    {
        pair<int, int> p = make_pair<int, int>(0 ,0);
        int d[] = {1, -1};

        for (int i = 0, n = moves.length(); i < n; i++)
        {
            if (moves[i] == 'U')
                p.second += d[0];
            if (moves[i] == 'D')
                p.second += d[1];
            if (moves[i] == 'R')
                p.first += d[0];
            if (moves[i] == 'L')
                p.first += d[1];
        }
        
        return (p.first == 0 && p.second == 0) ? true : false;
    }
};