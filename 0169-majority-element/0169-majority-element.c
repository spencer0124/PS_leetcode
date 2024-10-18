int majorityElement(int* nums, int numsSize) {
    // Boyer–Moore majority vote algorithm

    int currentNum=0, count=0;
    for(int i=0; i<numsSize; i++) {
        if(count==0) {
            currentNum=nums[i];
            count=1;
            continue;
        }

        if(currentNum==nums[i]) count++;
        else count--;
    }

    return currentNum;
}