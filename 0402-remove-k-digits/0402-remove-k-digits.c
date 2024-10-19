char NumStack[100000];

char* removeKdigits(char* num, int k) {
    int Numlength = strlen(num);

    // 먼저, 답이 0인지 확인
    // 지울수 있는 개수(k)와 0이 아닌 문자 개수를 비교 
    int nonZeroCount = 0;
    for(int i=0; i<Numlength; i++) {
        if(num[i] != '0') nonZeroCount++;
    }
    if(nonZeroCount <= k) return "0";

    
    int j = 0; // NumStack의 index
    NumStack[0] = num[0];

    

    for(int i=1; i<Numlength; i++) {
        
        // 여러번 연속해서 지워야할수도 있음
        // if 대신 while을 사용해야 한다
        while((j>=0) && (NumStack[j] > num[i]) && (k>0)) {
            k--; // 삭제 (지울수 있는 개수 1개 감소)
            j--; // 실제로는 삭제 대신 인덱스 감소만 해주면 된다
        }

        NumStack[++j] = num[i];
    }

    // 만약 k가 남았을 경우
    // 뒤에서부터 지워주면 된다
    while(k>0) {
        j--;
        k--;
    }


    NumStack[++j] = '\0';

    // 0으로 시작하는 경우 0을 제거해줘야 함
    // 개수를 계산해서 NumStack에 더해주면 된다.
    int start = 0;
    while(NumStack[start] == '0') {
        start++;
    }

    return NumStack + start; 
}