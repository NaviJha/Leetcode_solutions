class Solution {
public:
    int lowerbound(vector<int> &nums, int low , int high, int target){
        if(low > high) return -1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
        if(nums[mid] == target){
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] > target) high = mid-1;
        else low = mid + 1;
        }
        return ans;
    }
    int upperbound(vector<int> &nums, int low , int high, int target){
        if(low > high) return -1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
        if(nums[mid] == target){
            ans = mid;
            low = mid+1;
        }
        else if(nums[mid] > target) high = mid-1;
        else low = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums, 0, n-1, target);
        int up = upperbound(nums, 0 , n-1, target);
        return {lb, up};
    }
};