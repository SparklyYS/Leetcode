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
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> res;
        int n = digits.size(), carry = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if (i == n - 1)
                digits[i] += 1;

            digits[i] += carry;
            carry = digits[i] / 10;
            res.push_back(digits[i] % 10);
        }

        if (carry)
            res.push_back(carry);

        for (int i = 0, len = res.size(); i < len / 2; i++)
            swap(res[i], res[len - 1 - i]);

        return res;
    }
};