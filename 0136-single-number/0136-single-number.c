int singleNumber(int* nums, int numsSize) {
    int flag = 0;

    for(int i=0; i<numsSize; i++) {
        flag=0;

        if(nums[i] == -999999) {
            continue;
        }

        for(int j=i+1; j<numsSize; j++) {
            if(nums[i] == nums[j]) {
                nums[i] = -999999;
                nums[j] = -999999;
                flag=1;
            }
        }

        if(flag==0) return nums[i];
    }

    return 0;
}