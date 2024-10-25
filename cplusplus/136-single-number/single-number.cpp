class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int i = 0;
        int singleN;

        while(i < nums.size() - 1)
        {
            if(nums[i] == nums[i + 1])
            {
                i += 2;
            }
            else
            {
                singleN = nums[i];
                break;
            }
        }

        return nums[i];
    }
};