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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int tar = m + n - 1;
        int i = m - 1, j = n - 1;

        while (j >= 0)
            nums1[tar--] = (i >= 0) && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        
    }
};