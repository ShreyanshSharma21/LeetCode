//https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/625/

/*
Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
*/

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
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MIN,LONG_MAX);
    }
private:
    bool solve(TreeNode* root,long mn,long mx){
        if(root == NULL) return true;
        if(root->val <= mn || root->val >= mx){
            return false;
        }
        return solve(root->left,mn,root->val) && solve(root->right,root->val,mx);
    }
};