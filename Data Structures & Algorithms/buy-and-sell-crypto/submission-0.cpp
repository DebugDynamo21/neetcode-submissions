class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minPrice = INT_MAX;

        for(int price : prices){
            minPrice = min(minPrice, price);
            
            int profit = price - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
