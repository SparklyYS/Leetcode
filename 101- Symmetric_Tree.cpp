#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) 
    {
        if (!root)
            return true;
        
        return dfs(root->left, root->right);
    }

    bool dfs(TreeNode* lnode, TreeNode* rnode)
    {
        if (lnode == NULL && rnode == NULL)
            return true;
        if (lnode == NULL || rnode == NULL)
            return false;
        if (lnode->val != rnode->val)
            return false;

        bool flag = (dfs(lnode->left, rnode->right) && dfs(lnode->right, rnode->left));
        return flag;        
    }
};