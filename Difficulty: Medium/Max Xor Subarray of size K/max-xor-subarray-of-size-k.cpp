class Solution {
public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        
        if (k > n) return 0;   // Edge case
        
        int ans = 0;
        int start = 0;
        int tans = 0;
        
        for (int end = 0; end < n; end++) {
            
            // Add current element to window XOR
            tans ^= arr[end];
            
            // If window size exceeds k, shrink from left
            if (end - start + 1 > k) {
                tans ^= arr[start];
                start++;
            }
            
            // If window size == k, update answer
            if (end - start + 1 == k) {
                ans = max(ans, tans);
            }
        }
        
        return ans;
    }
};