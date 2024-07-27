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
    int cameras = 0;
    unordered_set<TreeNode*> covered;

    int minCameraCover(TreeNode* root) {
        covered.insert(nullptr);
        dfs(root, nullptr);
        return cameras;
    }

    void dfs(TreeNode* node, TreeNode* parent) {
        if (node) {
            dfs(node->left, node);
            dfs(node->right, node);
            if ((parent == nullptr && covered.find(node) == covered.end()) ||
                covered.find(node->left) == covered.end() ||
                covered.find(node->right) == covered.end()) {
                cameras++;
                covered.insert(node);
                covered.insert(node->left);
                covered.insert(node->right);
                covered.insert(parent);
            }
        }
    }
};