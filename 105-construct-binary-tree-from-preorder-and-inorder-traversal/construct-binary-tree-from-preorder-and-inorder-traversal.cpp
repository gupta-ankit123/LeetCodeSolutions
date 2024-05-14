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
int findposition(vector<int>& inorder,int element){
    int ans=0;
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==element){
            ans=i;
        }
    }
    return ans;
}
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int start,int end,int &index){
        if(start>end){
            return NULL;
        }
        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);

        int pos=findposition(inorder,element);
        root->left=solve(preorder,inorder,start,pos-1,index);
        root->right=solve(preorder,inorder,pos+1,end,index);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int index=0;
        return solve(preorder,inorder,0,n-1,index);
    }
};