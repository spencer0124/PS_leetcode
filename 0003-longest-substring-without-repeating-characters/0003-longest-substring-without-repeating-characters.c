#include <stdbool.h>

int lengthOfLongestSubstring(char* s) {
    // 예외케이스 처리
    if(strlen(s) == 0) return 0;

    // 기본값 = 1
    int maxlength = 1;

    for(int i=0; i<strlen(s)-1; i++) {
        int tempMaxLength = 1;
        bool foundtable[128] = {false};

        foundtable[s[i]] = true;

        // 다음 문자부터 하나씩 비교
        for(int j=i+1; j<strlen(s); j++) {
            bool isFound = (foundtable[s[j]]==true);
            if(isFound) {
                break;
            } else {        
                foundtable[s[j]]=true;
                tempMaxLength++;
            }
        }
        if(tempMaxLength > maxlength) maxlength = tempMaxLength;
    }

    return maxlength;
}