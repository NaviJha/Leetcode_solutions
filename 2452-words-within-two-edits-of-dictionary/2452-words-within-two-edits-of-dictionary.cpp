class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n = queries.size();
        int m = queries[0].size();
        int s = dictionary.size();
        vector<string> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s; j++) {
                int count = 0;
                for (int k = 0; k < m; k++) {
                    if (queries[i][k] != dictionary[j][k]) {
                        count++;
                    }
                    // Optimization: stop comparing if we already exceed 2 edits
                    if (count > 2) break; 
                }

                if (count <= 2) {
                    ans.push_back(queries[i]);
                    // CRITICAL FIX: Break here so we don't add the same 
                    // query multiple times if it matches other dictionary words.
                    break; 
                }
            }
        }
        return ans;
    }
};