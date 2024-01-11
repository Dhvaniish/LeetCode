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
//Approach-1 (Brute Force) - O(n^2) - n = number of nodes in the Tree
/*
  Just simply take a root, find all the differences of it from its childres and find max one
  Again go to root->left and do the same as above
  Again go to root->right and do the same as above
*/
class Solution {
public:
    int maxDiff;

    void findMaxUtil(TreeNode* root, TreeNode* child) {
        if(!root || !child)
            return;
        
        maxDiff = max(maxDiff, abs(root->val - child->val));

        findMaxUtil(root, child->left);
        findMaxUtil(root, child->right);
    }

    void findMaxDiff(TreeNode* root) {
        if(!root || !root->left && !root->right)
         return;
         
         //Find max differences of this root with all its children
         findMaxUtil(root, root->left);
         findMaxUtil(root, root->right);

         //firther move left and right
         findMaxDiff(root->left);
         findMaxDiff(root->right);
    }

    int maxAncestorDiff(TreeNode* root) {
        maxDiff = INT_MIN;

        findMaxDiff(root);   

        return maxDiff;     
    }
};