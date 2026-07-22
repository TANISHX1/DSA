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

void fill_list(struct TreeNode* root, int* buffer) {
if(root==NULL){
    return;
}
    fill_list(root->left,buffer);
    printf("%d  ", root->val);
    buffer[count++] = root->val;
    fill_list(root->right,buffer);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    
    int buffer[101];
    fill_list(root, buffer);
    // printf("counter : %d\n",count);
    int *result= malloc(count*sizeof(int));
    memcpy(result, buffer, count * sizeof(int)); 
    
    *returnSize = count;
    count =0;
    return result;
}