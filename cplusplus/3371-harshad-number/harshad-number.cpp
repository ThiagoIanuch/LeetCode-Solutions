class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int aux = x;
        while(aux > 0) {
            sum += aux % 10;

            aux /= 10;
        }

        if(x % sum != 0) {
            return -1;
        }

        return sum;
    }
};