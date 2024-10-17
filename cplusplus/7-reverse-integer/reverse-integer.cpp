class Solution {
public:
    int reverse(int x) {
        long int reverseX = 0;
        bool negative = false;

        if(x == -2147483648) {
            return 0;
        }

        if(x < 0) {
            negative = true;
            
            x = -x;
        }
        
        while(x > 0) {
            reverseX += x % 10;
            
            reverseX *= 10;
            
            x /= 10;
            
        }
        reverseX /= 10;
        
        if(negative) {
            reverseX = -reverseX;
        }

        if (reverseX < -2147483648 || reverseX > 2147483647) {
            return 0;
        }

        return reverseX;
    }
};