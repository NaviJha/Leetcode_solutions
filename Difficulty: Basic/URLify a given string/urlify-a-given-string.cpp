class Solution {
  public:
    string URLify(string &s) {
        // code here
        int n = s.size();
        string ans = "";
        for(int i = 0; i<n ;i++){
            if(s[i] == ' '){
                ans += "%20";
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};