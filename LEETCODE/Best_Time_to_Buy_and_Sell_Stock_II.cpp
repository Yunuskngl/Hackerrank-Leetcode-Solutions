/*SOLUTION:

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0 ; 
        int i=0, j=1;
        if(prices.size() == 1) return sum;
        while(1){
            if(prices[i] < prices[j]){
                sum += (prices[j]-prices[i]);
            }
            i++;j++;
            if(j == prices.size()){
                break;
            }
        }
        return sum;
    }
};


*/