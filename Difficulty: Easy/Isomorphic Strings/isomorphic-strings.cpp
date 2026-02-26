class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        
        if(s1.length() != s2.length()) 
            return false;
            
        vector<int> map1(256, -1);
        vector<int> map2(256, -1);
        
        for(int i = 0; i < s1.length(); i++) {
            
            if(map1[s1[i]] == -1 && map2[s2[i]] == -1) {
                map1[s1[i]] = s2[i];
                map2[s2[i]] = s1[i];
            }
            else if(map1[s1[i]] != s2[i])
                return false;
        }
        
        return true;
    }
};