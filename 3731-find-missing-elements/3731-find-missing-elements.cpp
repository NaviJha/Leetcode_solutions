class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }
        for(int i = mini ; i<= maxi; i++){
            if(find(nums.begin(), nums.end(), i) !=  nums.end()){
                continue;
            }
            else ans.push_back(i);
        }
        return ans;
    }
};