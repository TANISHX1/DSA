/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {

    *returnSize =n+1;
    int* buffer = (int*)malloc((*returnSize) * sizeof(int));
    if(!buffer){
        return NULL;
    }
    for (int i = 0; i <= n; i++) {
        int num = i;
        int count = 0;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
        buffer[i] = count;
    }
    return buffer;
}