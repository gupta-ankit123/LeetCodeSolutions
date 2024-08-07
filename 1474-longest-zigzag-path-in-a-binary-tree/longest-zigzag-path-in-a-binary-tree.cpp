class Solution {
public:

    void solve(TreeNode* root,bool flag,int &maxLen,int length){
        if(root==NULL ) return ;
        maxLen=max(maxLen,length);

        if(flag){
            solve(root->left,false,maxLen,length+1);
            solve(root->right,true,maxLen,1);
        }
        else{
            solve(root->right,true,maxLen,length+1);
            solve(root->left,false,maxLen,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        int maxLen=0;
        if(root==NULL) return maxLen;

        solve(root->left,false,maxLen,1);
        solve(root->right,true,maxLen,1);
        return maxLen;
    }
};