class Solution {
private:
    int prev = INT_MIN;
    int diff = INT_MIN;
    void helper(TreeNode *node) {
        if (node->left) {
            helper(node->left);
        }
        if (prev != INT_MIN) {
            if (diff == INT_MIN || node->val - prev < diff) {
                diff = node->val - prev;
            }
        }
        prev = node->val;
        
        if (node->right) {
            helper(node->right);
        }
    }
public:
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        return diff;
    }
};