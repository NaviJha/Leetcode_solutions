class Solution {
public:
    int maxProfit(vector<int>& arr, int k) {
        int n = arr.size();
        
        int buy = arr[0];   // effective buying price
        int profit = 0;

        for (int i = 1; i < n; i++) {
            
            // If we find a cheaper buying opportunity
            if (arr[i] < buy) {
                buy = arr[i];
            }
            
            // If selling is profitable after fee
            else if (arr[i] > buy + k) {
                profit += arr[i] - buy - k;
                
                // Update buy to avoid double counting
                buy = arr[i] - k;
            }
        }
        
        return profit;
    }
};