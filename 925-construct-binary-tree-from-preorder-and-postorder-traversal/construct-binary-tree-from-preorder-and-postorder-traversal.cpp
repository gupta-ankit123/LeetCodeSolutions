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

    int find(vector<int> &arr,int start,int end,int element){
        for(int i=start;i<=end;i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
    }
    int preIndex=0;

    TreeNode* solve(vector<int>& preorder, vector<int>& postorder,int start,int end){
        if(start>end||preIndex>=preorder.size()){
            return NULL;
        }

        int element=preorder[preIndex++];
        TreeNode* root=new TreeNode(element);
        if(start==end||preIndex>=preorder.size()){
            return root;
        }
        int pos=find(postorder,start,end,preorder[preIndex]);


        root->left=solve(preorder,postorder,start,pos);
        root->right=solve(preorder,postorder,pos+1,end-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        
        int n=preorder.size()-1;
        return solve(preorder,postorder,0,n);
    }
};