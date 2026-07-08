int removeDuplicates(int* nums, int numsSize) {
    if (numsSize ==0){
        return 0;
    }

    int idx = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[idx] == nums[i]) {
            continue;
        } else {
            idx++;
            nums[idx] = nums[i];
        }
    }

    return idx+1;
}