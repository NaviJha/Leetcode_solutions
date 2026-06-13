class Solution {
public:
    int totalsum(vector<int>& nums, int div){
        int total = 0;
        for(int i = 0; i<nums.size(); i++){
            total += nums[i]/div;
            if(nums[i]%div != 0) total++;   
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxx = INT_MIN;
        int minn = INT_MAX;
        for(int i = 0; i<n; i++){
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }
        int low = 1; 
        int high = maxx;
        int ans = 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(totalsum(nums, mid) <= threshold) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};