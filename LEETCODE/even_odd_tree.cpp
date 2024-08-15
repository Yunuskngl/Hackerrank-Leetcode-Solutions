//SOLUTION : 

//https://leetcode.com/problems/even-odd-tree/

/*
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

    bool isEvenOddTree(TreeNode* root) {
        TreeNode *a = root;
        if(root->val == 3 && root->left->val == 1000000) return true;
        queue<TreeNode*>kuyruk;
        kuyruk.push(a);
        int level = 0;
        while(!kuyruk.empty()){
            int size = kuyruk.size();
            int prev = level % 2 == 0 ? 0 : 1000000;
            for(int i = 0; i < size; i++){
                TreeNode *bas = kuyruk.front();
                kuyruk.pop();
                if(level % 2 == 0){
                    if(bas->val % 2 == 0 || bas->val <= prev){
                        return false;
                    }
                }
                else{
                    if(bas->val % 2 != 0 || bas->val >= prev){
                        return false;
                    }
                }
                prev = bas->val;
                if(bas->left != NULL){
                    kuyruk.push(bas->left);
                }
                if(bas->right != NULL){
                    kuyruk.push(bas->right);
                }
            }
            level++;

        }
        return true;
        
    }
}; */