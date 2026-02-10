class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i =0; i<n; i++){
            unordered_set<int> h1;
            unordered_set<int> h2;
            for(int j =i; j<n; j++){
                if(nums[j]%2 == 0) {
                    h1.insert(nums[j]);
                }
                else  h2.insert(nums[j]);
                if(h1.size() == h2.size()){
                    if(j-i+1> ans) ans = j-i+1;
                }
            }
        }
        return ans;

    }
};
//n=4
//h1 = 2
// h2 = 1,3
// ans = 2
// i =2
// j= 2
// nums[j] = 3