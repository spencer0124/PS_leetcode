void moveZeroes(int* nums, int numsSize) {
    int zeroCount = 0;
    int idx = 0;

    for(int i=0; i<numsSize; i++) {
        // 값이 0이 아닌 경우에만 추가
        // idx는 항상 i보다 작거나 같으므로 한 배열 안에서 처리 가능
        if(nums[i]) nums[idx++] = nums[i];
        else zeroCount++;
    }

    // zeroCount로 0의 개수를 파악해서, 개수만큼 0을 뒤에 더해주기 
    for(int i=0; i<zeroCount; i++) {
        nums[idx++] = 0;
    }

}