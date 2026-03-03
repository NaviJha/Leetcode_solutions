class Solution {
  public:
    int totalElements(vector<int> &arr) {
         int n = arr.size();
        if (n <= 2) return n; // Corner case

        int maxLen = 0;
        int left = 0;
        unordered_map<int, int> charMap; // Stores frequency of elements in window

        // Sliding window: right pointer expands the window
        for (int right = 0; right < n; right++) {
            charMap[arr[right]]++;

            // If more than 2 distinct elements, shrink from left
            while (charMap.size() > 2) {
                charMap[arr[left]]--;
                if (charMap[arr[left]] == 0) {
                    charMap.erase(arr[left]);
                }
                left++;
            }
            // Update max length
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};