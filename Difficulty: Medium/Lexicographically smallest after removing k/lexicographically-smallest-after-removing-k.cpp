class Solution {
  public:
    string lexicographicallySmallest(string &s, int k) {
        // code here
        int n=s.size();
        if(!(n&(n-1))) k>>=1;
        else k<<=1;
        if(k>=n) return "-1";
        if(k<=0) return s;
        string ans;
        for(auto it:s){
            while(ans.size() && ans.back()>it && k>0){
                ans.pop_back();
                k--;
            }
            ans+=it;
        }
        while(k){
            k--;
            ans.pop_back();
        }
    return ans;
    }
};