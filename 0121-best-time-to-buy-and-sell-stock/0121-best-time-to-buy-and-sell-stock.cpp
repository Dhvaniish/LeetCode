class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int profit=0;

        int difference;

        int mini=prices[0];

        for(int i=0; i<prices.size(); i++){

            difference = prices[i] - mini;

            profit = max(profit, difference);

            mini = min(prices[i], mini);

        }

        return profit;

    }

};