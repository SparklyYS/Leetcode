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
    int maxProfit(vector<int>& prices) 
    {
        int res = 0;
        
        if (prices.size() < 2)
            return res;

        for (int i = 0; i < prices.size()-1; i++)
        {
            if (prices[i+1] > prices[i])
                res += (prices[i+1] - prices[i]);
        }
        return res;
    }
};