class Solution {
public:
    string reverseVowels(string s) {
        int j = s.size() - 1;
        for(int i = 0; i < j; i++) {
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'i' ||  tolower(s[i]) == 'u' || tolower(s[i]) == 'e' || tolower(s[i]) == 'o') {
                while(j > i) {
                    if(tolower(s[j]) == 'a' || tolower(s[j]) == 'i' || tolower(s[j]) == 'u' || tolower(s[j]) == 'e' || tolower(s[j]) == 'o') {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                        j--;
                        break;
                    }
                    j--;
                }
            }
        }

        return s;
    }
};