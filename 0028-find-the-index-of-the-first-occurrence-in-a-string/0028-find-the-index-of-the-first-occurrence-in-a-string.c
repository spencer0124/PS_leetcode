int strStr(char* haystack, char* needle) {
    for(int i=0; i<strlen(haystack); i++) {

        if(haystack[i] == needle[0]) {
            int isAnswer = 1;
            int index1 = i;

            for(int j=0; j<strlen(needle); j++) {
                
                if(haystack[index1] != needle[j]) {   
                    isAnswer = 0;      
                    break;
                }
                index1++;
            }
            
            if(isAnswer == 1) {
                return i;
            }

        }
    }

    return -1;
}