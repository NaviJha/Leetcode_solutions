class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int min = prices[0];
        int ans = 0;
        for (int i = 0; i<n; i++){
            if(prices[i]<min){
                min = prices[i];
            }
            int temp = prices[i] - min;
            if(temp > ans){
                ans = temp;
            }
            
        }
        return ans;
    }
};
