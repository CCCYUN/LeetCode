class Solution {
public:
    int maxProfit(vector<int> &prices) {
       if(prices.size()<2)  return 0;
       
       int min_p=prices[0],profit=0;
        for (int i=1;i<prices.size();i++)
        {
            
            min_p=min(min_p,prices[i]);
            profit=max(profit,prices[i]-min_p);
        }
        
        return profit;
    
    }
};