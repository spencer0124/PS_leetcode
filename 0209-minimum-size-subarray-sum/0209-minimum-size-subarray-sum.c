#include <stdlib.h>


int minSubArrayLen(int target, int* nums, int numsSize) {
    int p1=0, p2=1;
    int min=9999999, sum=nums[0];

    if(sum>=target) {
        return 1;
    }

    for(p2=1; p2<numsSize; p2++) {
        sum = sum + nums[p2];

        if(sum>=target) {
            if((p2-p1+1)<min) {
                min = p2-p1+1;
            }
        }

        while(p1<=p2) {
            if((sum-nums[p1]) >= target) {
                sum = sum - nums[p1];
                p1++;

                if((p2-p1+1)<min) {
                    min = p2-p1+1;
                }
            } else {
                break;
            }
        }

        
        
    }

    return (min==9999999) ? 0 : min;
}