/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int left = 1, right = 1;
    left += maxDepth(root->left);
    right += maxDepth(root->right);
    return left > right ? left : right;
}