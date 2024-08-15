//https://leetcode.com/problems/maximum-depth-of-binary-tree/


//SOLUTION 1: 

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
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int count = 0;
        if(root == NULL){
            return 0;
        }
        else{
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            if(left > right){
                count = left + 1;
            }
            else{
                count = right + 1;
            }
            return count;

        }

    }

};*/










//SOLUTION 2:

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

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        else{
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            return max(right,left) +1;

        }

    }
    
}; */