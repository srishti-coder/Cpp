https://leetcode.com/problems/delete-node-in-a-bst/submissions/



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
class Solution {
public:
   static TreeNode* insucc(TreeNode* root){
        TreeNode* p=root->right;
        while(p->left) p=p->left;
        return p;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        
        if(key>root->val) root->right=deleteNode(root->right,key);
           else if(key<root->val) root->left=deleteNode(root->left,key);
        else{ 
            if(!root->right)
        {
            TreeNode* temp=root->left;
            delete(root);
            return temp;
        }
        
        else if(!root->left){
           TreeNode *temp=root->right;
            delete(root);
            return temp;
        }
        else{
            TreeNode* temp=insucc(root);
            swap(root->val,temp->val);
            root->right=deleteNode(root->right,key);
        }
    }
    return root;
    }
};