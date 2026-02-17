class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        int n = arr.size();
        
        vector<int> start(n), end(n);
        
        // Store start and end times separately
        for(int i = 0; i < n; i++) {
            start[i] = arr[i][0];
            end[i] = arr[i][1];
        }
        
        // Sort start and end times
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        int i = 0, j = 0;
        int currOverlap = 0;
        int maxOverlap = 0;
        
        // Sweep line
        while(i < n && j < n) {
            if(start[i] <= end[j]) {   // inclusive condition
                currOverlap++;
                maxOverlap = max(maxOverlap, currOverlap);
                i++;
            } else {
                currOverlap--;
                j++;
            }
        }
        
        return maxOverlap;
    }
};
