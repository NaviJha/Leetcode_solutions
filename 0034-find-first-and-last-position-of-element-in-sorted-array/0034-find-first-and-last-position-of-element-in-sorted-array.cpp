class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = -1;
        int end = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                start = i;
                break;
            }
        }
        if(start != -1){
        for(int i = start; i<n; i++){
            if(nums[i] == target){
                end = i;
            }
        }
        }
        return {start, end};
    }
};