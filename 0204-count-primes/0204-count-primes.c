int countPrimes(int n) {
    // 접근방법: 에라토스테네스의 체
    // 2 남기고 2의 배수 다 지움
    // 3 남기고 3의 배수 다 지움
    // 5 남기고 5의 배수 다 지움
    // ... 반복

    int isPrime[5000001];

    // 2부터 시작, n 미만까지 
    for(int i=2; i<n; i++) {
        isPrime[i]=1;
    }

    for(int i=2; i*i<n; i++) {
        // 0인 경우 이미 걸러졌으므로 통과 
        if(!isPrime[i]) continue;

        // 1인 경우, i*i부터 i씩 증가하며 0으로 처리 (배수들을 0으로 처리)
        // 항상 i*i번쨰부터 시작하면 된다
        for(int j=i*i; j<n; j=j+i) {
            isPrime[j] = 0;
        }
    }

    int count=0;
    // 2부터 시작, n 미만까지 
    for(int i=2; i<n; i++) {
        if(isPrime[i]) count++;
    }

    return count;
}