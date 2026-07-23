/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count = 0;
void iterate(struct TreeNode* root, int* buffer) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->val);
    buffer[count++] = root->val;
    iterate(root->left, buffer);
    iterate(root->right, buffer);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int buffer[101];

    iterate(root, buffer);
    *returnSize = count;
    count = 0;
    int* result = malloc((*returnSize + 1) * sizeof(int));
    memcpy(result, buffer, (*returnSize) * sizeof(int));
    result[*returnSize] = '\0';
    return result;
}