class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.back() < 9) {
            digits.back()++;

            return digits;
        }

        for(int i = digits.size() - 1; i >= 0; i--) {
            if(i == 0 && digits[0] == 9) {
                digits[i] = 1;
                digits.push_back(0);
                
                return digits;
            }

            if(digits[i] != 9) {
                digits[i]++;
                
                return digits;
            } 
          
            digits[i] = 0;
        }
        
        return digits;
    }
};