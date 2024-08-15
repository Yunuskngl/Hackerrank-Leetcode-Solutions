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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>kuyruk;

        kuyruk.push(root);
        TreeNode *bas=NULL;
        while(!kuyruk.empty()){
            bas = kuyruk.front();
            kuyruk.pop();
            if(bas ->right != NULL){
                kuyruk.push(bas->right);
            }
            if(bas->left != NULL){
              kuyruk.push(bas->left);
            }
        }
        return bas->val;
    }
};
 */  
