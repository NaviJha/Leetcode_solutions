class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        int n = nums.size();
        int m = (int)(n/3) + 1;
        map<int, int> mp;
        for(int i  = 0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == m) ls.push_back(nums[i]);
            if(ls.size() == 2) break;
        }
        return ls;
    }
};