
class Solution {
public:
    void leaf(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        
        leaf(root->left,ans);
        if(root->right==NULL && root->left==NULL){
            ans.push_back(root->val);
        }
        leaf(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        leaf(root1,ans1);
        leaf(root2,ans2);
        for(int i=0;i<ans1.size();i++){
            cout<<ans1[i]<<" ";
        }
        cout<<endl;

        for(int i=0;i<ans2.size();i++){
            cout<<ans2[i]<<" ";
        }
        cout<<endl;

        if(ans1.size()!=ans2.size()) return false;
        for(int i=0;i<(ans1.size());i++){
            if(ans1[i]!=ans2[i]){
                return false;
            }
        }
        return true;
    }
};