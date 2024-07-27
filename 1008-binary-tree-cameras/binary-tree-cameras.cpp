class Solution {
public:
    int minCameraCover(TreeNode* root) {
        int cameras = 0;
        return (dfs(root, cameras) == 0) ? cameras + 1 : cameras; 
    }

private:
    // 0: Needs Camera, 1: Has Camera, 2: Covered
    int dfs(TreeNode* node, int& cameras) {
        if (!node) {
            return 2; 
        }

        int left = dfs(node->left, cameras);
        int right = dfs(node->right, cameras);

        if (left == 0 || right == 0) { 
            cameras++;
            return 1; 
        }

        if (left == 1 || right == 1) { 
            return 2; 
        }

        return 0; 
    }
};