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
    void solve(TreeNode*root,int targetSum,int &currSum,vector<int>&temp,vector<vector<int>>& ans){
        if(root==NULL){
            return;
        }

        //Leaf Node
        if(root->left==NULL && root->right==NULL){
            temp.push_back(root->val);
            currSum+=root->val;
            if(currSum==targetSum){
                ans.push_back(temp);
            }
            temp.pop_back();
            currSum-=root->val;
            return;
        }

        temp.push_back(root->val);
        currSum+=root->val;
        solve(root->left,targetSum,currSum,temp,ans);
        solve(root->right,targetSum,currSum,temp,ans);

        //backtrack
        temp.pop_back();
        currSum-=root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int> temp;
        int currSum=0;
        solve(root,targetSum,currSum,temp,ans);
        return ans;
    }
};