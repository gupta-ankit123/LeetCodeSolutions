class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr=root;
        vector<int> ans;

        while(!st.empty() || curr!=NULL){
            while(curr!=NULL){
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
};