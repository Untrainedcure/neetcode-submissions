class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProf = 0;
        int minPrice = INT_MAX;
        for(int price : prices) {
            if(price < minPrice) {
                minPrice = price;
            }
            else {
                maxProf = max(maxProf,price-minPrice);
            }
        }
        return maxProf;
        
    }
};
