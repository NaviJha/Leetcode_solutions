class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        if(n ==1) return 0;
        if(n ==2){
            if(nums[0] > nums[1]) return 0;
            else return 1;
        }
        for(int i =1; i<n-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                ans = i;
                break;
            }
            else if(nums[0] > nums[n-1]) ans = 0;
            else ans = n-1;
        }
        return ans;
    }
};