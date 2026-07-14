class Solution {
public:
    bool check(long long mid, vector<int>& arr, int max_val) {
        for (int val : arr) {
            // Under both conditions: 
            // 1) mid > val  => mid = mid + (mid - val) = 2 * mid - val
            // 2) mid <= val => mid = mid - (val - mid) = 2 * mid - val
            mid = 2 * mid - val;
            
            if (mid < 0) return false;
            // Prevent integer overflow: once mid is >= max_val, it will never go negative
            if (mid >= max_val) return true; 
        }
        return true;
    }

    int find(vector<int>& arr) {
        int max_val = 0;
        for (int x : arr) {
            max_val = max(max_val, x);
        }
        
        int low = 1;
        int high = max_val;
        int ans = max_val;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid, arr, max_val)) {
                ans = mid;
                high = mid - 1; // Try to find a smaller valid start value
            } else {
                low = mid + 1;  // Increase the start value
            }
        }
        return ans;
    }
};