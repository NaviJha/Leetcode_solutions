class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int ans = 0;
        int count = 0;
        for(int i =0; i<n;i++){
           if(s.contains("01")) return false;
        }
        return true;
    }
};