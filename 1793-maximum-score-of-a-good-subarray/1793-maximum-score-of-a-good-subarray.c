int maximumScore(int* nums, int numsSize, int k) {
    // k를 기준으로 왼쪽이나 오른쪽 중 확장할 곳을 골라야 함
    // 둘중에, 큰 숫자가 있는 쪽으로 확장

    int left=0, right=0, min=nums[k];
    int final=nums[k];
    int leftIdx=k, rightIdx=k;

    for(int i=0; i<numsSize-1; i++) {
        left = leftIdx>0 ? nums[leftIdx-1] : 0;
        right = rightIdx<numsSize-1 ? nums[rightIdx+1] : 0;

        // left>right
        if(left>right) {
            if(min>left) min=left;
            leftIdx--;
        } 
        // left<right
        else {
            if(min>right) min=right;
            rightIdx++;
        }

        // max 값 업데이트 
        if((rightIdx - leftIdx + 1)*(min) > final) final = (rightIdx - leftIdx + 1)*(min);
    }

    return final;
}