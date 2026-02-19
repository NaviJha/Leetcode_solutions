class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0;      // previous group count
        int currGroup = 1;      // current group count
        int ans = 0;

        for(int i = 1; i < s.length(); i++) {
            if(s[i] == s[i-1]) {
                currGroup++;  // same character, increase group count
            } else {
                ans += min(prevGroup, currGroup);
                prevGroup = currGroup;
                currGroup = 1;
            }
        }

        ans += min(prevGroup, currGroup);

        return ans;
    }
};
