class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = prices[0];
        int buy=0;
        for(int i=1;i<prices.size();i++){
            if(a>prices[i]){
                a = prices[i];
            }
            else{
                buy = max(buy,prices[i]-a);
            }
        }
        return buy;
    }
};