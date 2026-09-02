class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int n = prices.size();
        int maxprofit=0;
        while(r<n){
            if(prices[l]>prices[r]){
                l=r;
            }
            else{
                int profit=prices[r]-prices[l];
                maxprofit=max(profit,maxprofit);
            }
            r++;
        }
        return maxprofit;
    }
};
