int trailingZeroes(int n) {
    int count=0;
    int num=0;

    // 2! = 2
    // 3! = 6
    // 4! = 24
    // 5! = 120

    if(n <= 4) return 0;

    for(int i=5; i<=n; i++) {
        int copy = i;
        while(copy % 5==0) {
            count++;
            copy /= 5;
        }
    }

    return count;
}