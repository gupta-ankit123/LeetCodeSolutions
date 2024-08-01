
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);

    }

     void recover(TreeNode* root,vector<int>&ans,int& i){
        if(root==NULL) return;
        recover(root->left,ans,i);
        root->val=ans[i++];
        recover(root->right,ans,i);
        
    }
    void recoverTree(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        int index=0;
        recover(root,ans,index);
    }
};