class Solution {
public:
    double myPow(double x, int n) {
        long int m = n;

        if(m == 0) {
            return 1;
        }
        
        if(m == 1) {
            return x;
        }
        
        if (m < 0) {
            x = 1 / x;
        
            m *= -1;
        }

        double result = 1;

        while (m > 0) {
            if (m % 2 == 1) {
                result *= x;
            }
            x *= x;
            m /= 2;
        }

        return result;
    }
};