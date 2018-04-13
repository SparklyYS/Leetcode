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
        queue<TreeNode*> lq;
        queue<TreeNode*> rq;

        if (!root)
            return true;
        
        lq.push(root->left);
        rq.push(root->right);

        while (!lq.empty() && !rq.empty())
        {
            TreeNode* lnode = lq.front();
            lq.pop();
            TreeNode* rnode = rq.front();
            rq.pop();

            if (lnode == NULL && rnode == NULL)
                continue;
            if (lnode == NULL || rnode == NULL)
                return false;
            if (lnode->val != rnode->val)
                return false;
            
            lq.push(lnode->left);
            rq.push(rnode->right);
            lq.push(lnode->right);
            rq.push(rnode->left);
        }

        return true;
    }
};