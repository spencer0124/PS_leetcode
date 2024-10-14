int romanToInt(char* s) {
    int romanToNumber(char input) {
        switch (input) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int sum = 0;
    int length = strlen(s);

    for(int i=0; i<strlen(s); i++) {
        int currentVal = romanToNumber(s[i]);
        int nextVal = (i < length - 1) ? romanToNumber(s[i + 1]) : 0;

        if (currentVal < nextVal) {
            sum += nextVal - currentVal;
            i++;  // i++로 한 번 더 넘어가기
        } else {
            sum += currentVal;
        }
    }

    return sum;
}