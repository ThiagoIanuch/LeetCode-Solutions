class Solution {
public:
    bool isPalindrome(string s) {
        string s2;

        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                s2 += tolower(s[i]);
            }
        }
        
        string palindrome = s2;
        reverse(palindrome.begin(), palindrome.end());

        if(palindrome != s2) {
            return false;
        }      

        return true;
    }
};