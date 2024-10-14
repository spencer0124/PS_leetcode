#include <stdlib.h>

int longestMountain(int* arr, int arrSize) {
    if(arrSize<3) return 0;

    int count=1, max=1;
    // 내려가는 단계(step2)에 들어갔는지
    // 0: 아직 안들어감
    // 1: 들어감
    int step1=0, step2=0;
    int index=0;

    for(int i=0; i<arrSize-1; i++) {
        if((step2==0) && (arr[i]<arr[i+1])) {
            count++;
            step1=1;
        }
        else if((step1==1) && (step2==0) && arr[i]>arr[i+1]) {
            count++;
            step2=1;
            index=i;
        }
        else if((step2==1) && (arr[i]>arr[i+1])) {
            count++;
        }
        else {
            if((count>max) && (step2==1)) {
                max=count;
            }
            // 앞에서 Moutain을 일부 만든경우
            // step2+1 부분에서 다시 시작해야 한다
            // i++가 있으므로 i=index로 설정
            if(step2==1) {
                i = index;
            }
            count=1;
            step1=0;
            step2=0;  
            
        }
    }

    // 모든 요소가 다 moutain array인 경우
    // for문의 else에 접근할 일이 없으므로 max 값 갱신이 되지 않는다!
    if((count>max) && (step2==1)) {
        max=count;
    }
    
    return max==1 ? 0 : max;
}