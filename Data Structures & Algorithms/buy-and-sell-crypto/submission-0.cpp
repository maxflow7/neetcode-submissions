class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {

     int mina = prices[0];
     int maxa = 0;

     for(int i = 1 ; i<prices.size(); i++)
     {
        if(prices[i]<mina)
        mina = prices[i];

        maxa = max(maxa, prices[i]-mina);

     }

     return maxa;


        
    }
};
