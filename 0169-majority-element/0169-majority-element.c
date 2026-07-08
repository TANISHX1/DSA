int majorityElement(int* nums, int numsSize) {
    if (numsSize == 1) {
        return nums[0];
    }
    int num = 0, count = 0;
    bool flags[numsSize] ;
    memset(flags,TRUE,sizeof(flags));

    for (int i = 0; i < numsSize - 1; i++) {
        num = nums[i];
        count++;
        if (flags[i]) {

            for (int j = i + 1; j < numsSize; j++) {
                if ((num == nums[j])) {
                    flags[j] = FALSE;
                    count++;
                }
            }
        }

        if (count > numsSize / 2) {
            break;
        } else {
            count = 0;
        }
    }

    return num;
}