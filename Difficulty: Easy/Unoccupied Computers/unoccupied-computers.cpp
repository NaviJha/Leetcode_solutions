class Solution {
  public:
    int solve(int n, string s) {
        // code here
        int r = s.size();
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<r; i++){
            if(n >0 && mp[s[i] ] == 0){
                n--;
                mp[s[i]] = 1;
            }
            else if((n== 0) && mp[s[i]]  == 0){
                ans++;
                mp[s[i]] = 2;
            }
            else if(mp[s[i]] == 1) n++;
        }
        return ans;
    }
};
