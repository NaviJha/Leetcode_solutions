class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n <= 3) return false;
        if(nums[0]>=nums[1]) return false;

        int p = 0;
        int q = 0; 
        int count =0;
        for(int i =0;i<n-1; i++){
            if(nums[i]<nums[i+1]) count++;
            else{
                p = count;
                break;
            }
        }
        if(count == n-1) return false;

        count = p;
        for(int i = p; i<n-1; i++){
            if(nums[i]>nums[i+1]) count++;
            else{
                q = count;
                break;
            }
        }
        if(count == n-1) return false;

        count = q;
        for(int i = q; i<n-1; i++){
            if(nums[i]<nums[i+1]) count++;
            else break;
        }
        if(count == n-1) return true;
        return false;
    }
};