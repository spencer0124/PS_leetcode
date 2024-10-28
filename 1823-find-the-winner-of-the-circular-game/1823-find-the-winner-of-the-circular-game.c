int findTheWinner(int n, int k) {
    // n: 총 숫자 개수 (1~n)
    // k: 제거할때 count 규칙

    int numArr[502] = {0,};

    // 인덱스 0이 아니라 1부터 사용할 예정
    // 범위 내의 숫자를 1로 초기화 
    // 1 -> 살아있음
    // 2 -> 죽음 
    for(int i=1; i<=n; i++) {
        numArr[i] = 1;
    }

    int idx=1;
    int count = 0;

    for(int i=1; i<=n-1; i++) {
        while(1) {
            if(idx > n) {
                while(idx > n) {
                    idx = idx - n;
                }  
            }
            // printf("idx: %d\n", idx);

            if(numArr[idx] == 1) {
                count++;
            } else {
                
            }

            if(count == k) {
                numArr[idx] = 2;
                // printf("here: %d\n", idx);
                count=0;
                break;
            }

            idx++;
        }
    }

    for(int i=1; i<=n; i++) {
        if(numArr[i]==1) {
            return i;
        }
    }

    return 0;
}