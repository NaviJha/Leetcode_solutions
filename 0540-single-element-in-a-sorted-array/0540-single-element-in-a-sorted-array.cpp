class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;
        unordered_map<int , int > m;
        for(int  i = 0; i<n; i++){
            m[nums[i]]++; 
        }
        for(auto it: m){
            if(it.second == 1) ans = it.first;
        }
        return ans;
    }
};