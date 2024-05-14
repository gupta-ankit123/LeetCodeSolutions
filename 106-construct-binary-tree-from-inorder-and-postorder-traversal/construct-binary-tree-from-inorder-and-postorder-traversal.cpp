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

int findposition(vector<int> &arr,int element){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
TreeNode *solve(vector<int>& inorder, vector<int>& postorder,int start,int end,int &index){
    if(start>end){
        return NULL;
    }

    int element=postorder[index--];
    TreeNode* root=new TreeNode(element);
    int pos=findposition(inorder,element);

    root->right=solve(inorder,postorder,pos+1,end,index);
    root->left=solve(inorder,postorder,start,pos-1,index);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int index=n-1;
        int start=0;
        

        return solve(inorder,postorder,0,n-1,index);
    }
};