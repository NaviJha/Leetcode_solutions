class Solution {
  public:
    int smallestSubstring(string s) {
        int last0 = -1, last1 = -1, last2 = -1;
        int minLength = INT_MAX;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') last0 = i;
            else if (s[i] == '1') last1 = i;
            else if (s[i] == '2') last2 = i;

            // Check if we have seen all three characters at least once
            if (last0 != -1 && last1 != -1 && last2 != -1) {
                // The window starts at the oldest of the three indices
                int start = min({last0, last1, last2});
                minLength = min(minLength, i - start + 1);
            }
        }

        return (minLength == INT_MAX) ? -1 : minLength;
    }
};