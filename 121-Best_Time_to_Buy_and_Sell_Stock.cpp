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
        int buy = (1 << 30);
        int maxProfit = 0;

        for (auto price : prices)
        {
            if (price < buy)
                buy = price;
            if (price > buy)
                maxProfit = max(maxProfit, price - buy);
        }
        
        return maxProfit;
    }
};