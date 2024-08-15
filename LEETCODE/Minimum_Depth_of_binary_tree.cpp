//SOLUTION: 

//https://leetcode.com/problems/minimum-depth-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root){
            int left = minDepth(root->left);
            int right = minDepth(root->right);
            if(left == 0 || right == 0){
                return 1 + max(left,right);
            }
            else
                return 1 + min(left,right);
            
            
        }
        return 0;
    }
};*/