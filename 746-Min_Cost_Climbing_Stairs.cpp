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
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        for (int i = 2; i < n; i++)
            cost[i] = min(cost[i-2]+cost[i], cost[i-1]+cost[i]);
        
        return min(cost[n-2], cost[n-1]);
    }
};