class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int ans = target - nums[i];
            for(int j = i+1; j<n; j++){
                if(nums[j] == ans) return {i,j};
            }
        }
        return {};
    }
};