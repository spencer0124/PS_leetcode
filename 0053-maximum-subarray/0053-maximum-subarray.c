int maxSubArray(int* nums, int numsSize) {
    // two pointer 접근보다, Kadane 알고리즘이 효율적이다

    int currentSum=nums[0], MaxSum=nums[0];

    for(int i=1; i<numsSize; i++) {
        if(currentSum < 0) {
            currentSum = nums[i];
        } else {
            currentSum += nums[i];
        }

        if(currentSum > MaxSum) MaxSum = currentSum;
    }

    return MaxSum;
}