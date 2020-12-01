/*
 Time complexity : O(h) , h is the height of the tree.
 Space complexity : O(1) , neglecting stack space.
 My approach :  traverse the  tree , if  root is null return 0 else for rest of the node return max(root->left,root->right) +1 recursively.
 */
 
 class Solution {
public:
    int helperDepth(TreeNode* root)
    {
       if(root == NULL ) return 0;
       
        return  max(helperDepth(root->left),helperDepth(root->right)) + 1;
        
    }
    int maxDepth(TreeNode* root) 
    {
         if( root == NULL) return 0;
         if( root->left == NULL and root->right == NULL ) return 1;
         
         int res = helperDepth(root);
        
        return res;
    }
};
