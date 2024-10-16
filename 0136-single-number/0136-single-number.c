int singleNumber(int* nums, int numsSize) {
    // xor 연산: 다르면 1, 같으면 0
    // 교환법칙: a ^ b = b ^ a
    // 결합법칙: (a ^ b) ^ c = a ^ (b ^ c)

    // nums[0]에 대해 배열의 모든 요소에 xor을 적용하면, 하나밖에 없는 원소를 찾을 수 있다 

    for(int i=1; i<numsSize; i++) {
        nums[0] = nums[0] ^ nums[i];
    }

    return nums[0];
}