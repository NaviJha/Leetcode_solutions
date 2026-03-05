class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int ans = -1;
        int n = s.size();
        int l = 0; 
        int r = 0;
        unordered_map<char, int> mp;
        while(r < n){
            mp[s[r]]++;
            if(mp.size() == k) {
                ans = max(ans, r-l+1);
            }
            if(mp.size()> k){
                mp[s[l]]--;
                if(mp[s[l] ] == 0) mp.erase(s[l]);
                l++;
            } 
            r++;
        }
        return ans;
    }
};