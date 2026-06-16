class Solution {
public:
    vector<int> constructList(vector<vector<int>> &queries) {
        vector<int> ans;
        int cum_xor = 0;
        int n = queries.size();
        
        // Step 1: Process queries in reverse order
        for (int i = n - 1; i >= 0; i--) {
            if (queries[i][0] == 1) {
                // Accumulate the XOR value for all previous insertions
                cum_xor ^= queries[i][1];
            } else {
                // For type 0, apply the accumulated XOR right now
                ans.push_back(queries[i][1] ^ cum_xor);
            }
        }
        
        // Step 2: Push the initial 0 element, which undergoes ALL XOR queries
        ans.push_back(0 ^ cum_xor);
        
        // Step 3: Sort the final list as required by the problem
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};