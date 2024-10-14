#include <math.h>

int titleToNumber(char* columnTitle) {
    int sum = 0;

    for(int i=0; i<strlen(columnTitle); i++) {
        sum = sum*26 + (columnTitle[i]-'A'+1);
    }

    return sum;
}