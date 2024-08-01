
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        vector<int> ans;

        if(root==NULL) return ans;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* node=st1.top();
            st1.pop();
            st2.push(node);
            if(node->left) st1.push(node->left);
            if(node->right) st1.push(node->right);
        }

        while(!st2.empty()){
            int top=st2.top()->val;
            ans.push_back(top);
            st2.pop();
        }
        return ans;
    }
};