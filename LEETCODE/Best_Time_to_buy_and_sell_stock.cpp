/*SOLUTION:

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprices = 0;
        int minprices = prices[0];
        int sell = 0;
        for(int j = 0 ; j < prices.size() ; j++){
            minprices = min(minprices,prices[j]);
            sell = prices[j] - minprices;
            maxprices = max(maxprices,sell);
        }
        return maxprices;
    }
};

*/