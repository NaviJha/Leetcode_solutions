class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();
        for(int i = 0; i<q; i++){
            int idx = queries[i][0];
            while(idx<= queries[i][1]){
                nums[idx] = (1LL * nums[idx] * queries[i][3]) % 1000000007;
                idx += queries[i][2];
            }
        }
        int ans = nums[0];
        for(int i = 1; i<n; i++){
            ans = ans^ nums[i];
        }
        return ans;
    }
};