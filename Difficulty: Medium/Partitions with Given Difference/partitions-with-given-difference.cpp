class Solution {
public:
    int solve(vector<int> &arr, int target, int ind, int n, vector<vector<int>> & dp) {
        // Base case
        if (ind == n) {
            if (target == 0) return 1;
            return 0;
        }
        if(dp[ind][target] != -1) return dp[ind][target];

        // If element is 0 → special case
        if (arr[ind] == 0) {
            // take or not take → both same target
            return dp[ind][target] = 2 * solve(arr, target, ind + 1, n, dp);
        }
        

        // Not take
        int notTake = solve(arr, target, ind + 1, n, dp);

        // Take (only if possible)
        int take = 0;
        if (target >= arr[ind]) {
            take = solve(arr, target - arr[ind], ind + 1, n, dp);
        }

        dp[ind][target]=  take + notTake;
        return dp[ind][target];
    }

    int countPartitions(vector<int>& arr, int diff) {
        int n = arr.size();
        int sum = 0;

        for (int x : arr) sum += x;

        // Invalid cases
        if (sum < diff || (sum + diff) % 2 != 0) return 0;

        int target = (sum + diff) / 2;
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));
        

        return solve(arr, target, 0, n, dp);
    }
};