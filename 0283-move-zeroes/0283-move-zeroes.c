void moveZeroes(int* nums, int numsSize) {
    int zeroCount = 0;

    for(int i=numsSize-1; i>=0; i--) {
        if(nums[i] ==0) {
            for(int j=i; j<numsSize-1; j++) {
                int temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}