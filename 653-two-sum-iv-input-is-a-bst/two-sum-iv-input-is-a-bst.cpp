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

    vector<int> inorder(TreeNode* root,vector<int>& ans){
        if(!root){
            return ans;
        }
        stack<TreeNode*> st;
        TreeNode* curr=root;
        while(curr!=NULL || !st.empty()){
            while(curr){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            curr=curr->right;
        }
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);

        int i=0;
        int j=ans.size()-1;
        while(i<j){
            int sum=ans[i]+ans[j];
            if(sum==k){
                return true;
            }
            if(sum>k){
                j--;
            }
            else{
            i++;

            }
        }
        return false;
    }
};