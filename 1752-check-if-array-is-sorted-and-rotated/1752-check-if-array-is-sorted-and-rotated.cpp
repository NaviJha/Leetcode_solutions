class Solution {
public:
    int findk(vector<int> &nums){
        int ans = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] < nums[i-1]){
                ans = i; 
                return ans;  
            }
        }
        return 0;
    }
    bool check(vector<int>& nums) {
        int k = findk(nums);
         if (k == 0) return true;
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]<nums[i-1]) {
                return false; 
            }
        }
        return true;
    }
};