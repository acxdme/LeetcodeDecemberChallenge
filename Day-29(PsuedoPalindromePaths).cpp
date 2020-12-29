/*
Time complexity : O(N)
Space complexity :
My approach :
*/

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
    void Phelper(TreeNode* root, vector<vector<int>>& paths,vector<int> temp)
    {
        if(root == NULL) return ;
        temp.push_back(root->val);
        if(!root->left and !root->right)
            paths.push_back(temp);
        Phelper(root->left,paths,temp);
        Phelper(root->right,paths,temp);
           
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root == NULL) return 0;
        vector<vector<int>> paths;
        vector<int> temp;
        Phelper(root,paths,temp);
        
        int steps =0;
        for(auto it : paths )
        {
            int hash[10] = {0};
            int odd =0;
            for(auto it1 = it.begin();it1!=it.end();it1++) hash[*it1]++;
            for(int i =1;i<10;i++)
            {
                if( hash[i]%2 != 0 ) odd++;   //odd is the  number of occurence of standalone digits.
            }

            if(odd <=1) steps++;            // if odd is greater than 1 than no palindrome can be formed.
            
        }
        
        return steps;
        
    }
};
