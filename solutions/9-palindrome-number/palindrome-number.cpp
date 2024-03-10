class Solution {
public:
    bool isPalindrome(int x) {
        long int palindrome = 0;
        int temp = x;

        while(temp > 0) {
            palindrome = palindrome * 10 + temp % 10;

            temp /= 10;
        }

        if(palindrome == x) {
            return true;
        }
        else {
            return false;
        }
    }
};