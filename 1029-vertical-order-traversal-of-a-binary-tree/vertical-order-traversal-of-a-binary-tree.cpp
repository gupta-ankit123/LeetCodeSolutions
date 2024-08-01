class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mpp;

        q.push({root,{0,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            mpp[vertical][level].insert(node->val);

            if(node->left){
                q.push({node->left,{vertical-1,level+1}});
            }
            if(node->right){
                q.push({node->right,{vertical+1,level+1}});
            }

        }
        for(auto it:mpp){
            vector<int>temp;
            for(auto p:it.second){
                temp.insert(temp.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};