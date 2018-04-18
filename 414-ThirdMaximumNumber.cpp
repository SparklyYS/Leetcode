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
    int thirdMax(vector<int> &nums)
    {
        set<int> s;

        for (auto num : nums)
        {
            s.insert(num);
            if (s.size() > 3)
                s.erase(s.begin());
        }

        return (s.size() == 3) ? *s.begin() : *s.rbegin();
    }
};