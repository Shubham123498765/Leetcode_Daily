class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        dfs(root, 1, res);
        return res;
    }

private:
    void dfs(TreeNode* node, int depth, vector<int>& res) {
        if (!node) {
            return;
        }
        dfs(node->left, depth + 1, res);
        dfs(node->right, depth + 1, res);
        if (depth > res.size()) {
            res.resize(depth, INT_MIN);
        }
        res[depth - 1] = max(res[depth - 1], node->val);
    }
};