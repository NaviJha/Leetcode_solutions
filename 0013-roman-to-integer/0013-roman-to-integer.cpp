class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        int n = s.length();
        // Iterate through the string, stopping before the last character
        for (int i = 0; i < n - 1; ++i) {
            // If the current value is less than the next, subtract it
            if (romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                // Otherwise, add it
                result += romanMap[s[i]];
            }
        }     
        // The last character's value is always added
        result += romanMap[s[n - 1]];
        return result;
    }
};