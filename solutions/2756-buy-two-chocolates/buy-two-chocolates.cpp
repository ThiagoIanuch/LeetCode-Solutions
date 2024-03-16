class Solution {
public:
    int buyChoco(std::vector<int>& prices, int money) {
        int actualPrice = money;
        int total = money;

        for(int i = 0; i < prices.size(); i++) {
            for(int j = i + 1; j < prices.size(); j++) {
                if(prices[i] + prices[j] <= actualPrice) {
                    actualPrice = prices[i] + prices[j];
                    
                    total = money;

                    total -= actualPrice;
                }
            }
        }

        return total;
    }
};
