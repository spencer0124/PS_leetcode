/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int Map1[1001] = {0,}; // 0~1000까지 저장 가능
    int Map2[1001] = {0,};

    // int max = nums1Size > nums2Size ? nums1Size : nums2Size;

    for(int i=0; i<nums1Size; i++) {
        Map1[nums1[i]]++;
    }

    for(int i=0; i<nums2Size; i++) {
        Map2[nums2[i]]++;
    }

    int* result = malloc(sizeof(int) * 1001);
    int resultIdx = 0;

    for(int i=0; i<1001; i++) {
        if((Map1[i] != 0) && (Map2[i] != 0)) {
            // 둘중에 작은 값을 개수로 사용
            // 개수만큼 해당 수 배열에 추가
            // i는 해당 숫자
            // Map[i]는 i가 나온 개수

            int min = Map1[i] > Map2[i] ? Map2[i] : Map1[i];

            for(int j=0; j<min; j++) {
                result[resultIdx++] = i;
            }
        }
    }

    *returnSize = resultIdx;

    return result;

}