//https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/628/

/*
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            vector<int> temp;
            while(cnt--){
                TreeNode* p=q.front();
                temp.push_back(p->val);
                q.pop();
                if(p->left!=NULL)
                    q.push(p->left);
                if(p->right!=NULL)
                    q.push(p->right);
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};