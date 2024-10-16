class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) {
            return "0";
        }

        bool isNegative = false;
        string base7;

        if(num < 0) {
            num = -num;

            isNegative = true;
        }

        while(num > 0) {
            base7 = to_string(num % 7) + base7;

            num /= 7;
        }
        
        if(isNegative) {
            base7 = "-" + base7;

            return base7;
        }

        return base7; 
    }
};