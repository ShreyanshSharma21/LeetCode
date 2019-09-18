//https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/627/


Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

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
    bool isSymmetric(TreeNode* root) {
        return solve(root,root);
    }
private:
    bool solve(TreeNode* l,TreeNode* r){
        if(!l && !r)
            return true;
        if(!l || !r)
            return false;
        return (l->val == r->val) && solve(l->left,r->right) && solve(l->right,r->left);
    }
};