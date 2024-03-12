class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> output;

        for(int i = 0; i < nums.size(); i++) {
            int cont = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] < nums[i]) {
                    cont++;
                }
            }

            output.push_back(cont);
        }

        return output;
    }
};