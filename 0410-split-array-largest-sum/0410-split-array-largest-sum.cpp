class Solution {
public:
    int countstu(vector<int>& nums, int sum){
        int stu = 1;
        int lg = 0;
        for(int i = 0; i<nums.size(); i++){
            if(lg + nums[i] <= sum){
                lg += nums[i];
            }
            else{
                stu++;
                lg = nums[i];
            }
        }
        return stu;
    }
    int splitArray(vector<int>& nums, int k) {
        int n  = nums.size();
        int maxx = INT_MIN;
        int sum   =0; 
        for(int i = 0; i<n; i++){
            maxx = max(nums[i], maxx);
            sum += nums[i];
        }
        int low = maxx;
        int high = sum;
        int ans = 0;
        while(low <= high){
            int mid = (low + high)/2;
            int stu = countstu(nums, mid);
            if(stu <= k){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};