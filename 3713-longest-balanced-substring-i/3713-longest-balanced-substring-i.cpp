class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> hashMap;
            for (int j = i; j < n; j++) {
                hashMap[s[j]]++;

                int freq = -1;
                bool balanced = true;

                for (auto it : hashMap) {
                    if (freq == -1) {
                        freq = it.second;
                    } else if (freq != it.second) {
                        balanced = false;
                        break;
                    }
                }

                if (balanced) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};