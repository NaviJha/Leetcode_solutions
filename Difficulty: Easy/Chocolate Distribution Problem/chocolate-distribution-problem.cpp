class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        
        if (m == 0 || n == 0) return 0;
        
        sort(a.begin(), a.end());
        
        if (m == n) return a[n - 1] - a[0];
        
        int ans = INT_MAX;
        
        // Check every window of size m
        for (int i = 0; i + m - 1 < n; i++) {
            int temp = a[i + m - 1] - a[i];
            ans = min(ans, temp);
        }
        
        return ans;
    }
};