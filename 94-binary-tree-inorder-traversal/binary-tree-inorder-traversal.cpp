class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr=root;

        while(curr){
            //if left is NULL then visit the curr node and go right
            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            //left node is not null
            else{
                //find inorder predecessor
                TreeNode* pred=curr->left;
                while(pred->right!=curr && pred->right){
                    pred=pred->right;
                }
                //if right node is NULL then go left after establishing link from pred to curr
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }

                else{
                    //left is already visited, go right after visiting curr node while removing the link
                    pred->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};