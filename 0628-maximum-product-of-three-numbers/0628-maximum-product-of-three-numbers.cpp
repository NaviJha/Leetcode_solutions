class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int Rproduct = nums[n-1] * nums[n-2] * nums[n-3];
        int Lproduct = nums[0] * nums[1] * nums[2];
        int fproduct = nums[0] * nums[1] * nums[n-1];
        int gproduct = nums[0] * nums[n-1] * nums[n-2];
        int ans = max(Lproduct, Rproduct);
        ans = max(ans, fproduct);
        ans = max(ans, gproduct);
        return ans;
    }
};