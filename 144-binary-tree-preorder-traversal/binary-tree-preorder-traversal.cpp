class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        stack<TreeNode*> st;
        st.push(root);
        vector<int> ans;

        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();
            ans.push_back(curr->val);
             if(curr->right) st.push(curr->right);
            if(curr->left){
                st.push(curr->left);
            }
           

        }
        return ans;
    }
};