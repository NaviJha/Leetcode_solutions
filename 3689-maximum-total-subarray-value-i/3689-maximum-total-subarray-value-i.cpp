class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxx = INT_MIN;
        int minn = INT_MAX;
        int n = nums.size();
        for(int i = 0; i<n ; i++){
            if(nums[i] > maxx) maxx = nums[i];
            if(nums[i]< minn) minn = nums[i];
        }
        long long ans = maxx - minn;
        ans = ans* k;
        return ans;
    }
};