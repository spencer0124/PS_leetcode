int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {

    // 해답이 존재하는지를 검사
    int totalSum = 0;
    for(int i=0; i<gasSize; i++) {
        totalSum += gas[i] - cost[i];
    }

    if(totalSum < 0) return -1;

    int start=0;
    int sum=-1;

    // totalSum >= 0이면 반드시 해답 존재 
    for(int i=0; i<gasSize; i++) {
        if(sum < 0) {
            start = i;
            sum = gas[i] - cost[i];
        } else {
            sum = sum + gas[i] - cost[i];
        }
    }   

    return start;
}