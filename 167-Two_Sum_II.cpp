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
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int start = 0, finish = numbers.size()-1;
        while (start < finish)
        {
            int findNum = target - numbers[start];
            if (findNum < numbers[finish])
                finish--;
            if (findNum > numbers[finish])
                start++;
            if (findNum == numbers[finish])
                break;
        }
        vector<int> res = {start+1, finish+1};
        return res;
    }
};