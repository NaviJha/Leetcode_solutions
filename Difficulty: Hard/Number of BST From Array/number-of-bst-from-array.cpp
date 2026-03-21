class Solution {
public:
    vector<int> countBSTs(vector<int>& arr) {
        int n = arr.size();
        
        // Step 1: Precompute Catalan numbers
        vector<long long> catalan(n + 1, 0);
        catalan[0] = catalan[1] = 1;
        
        for(int i = 2; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                catalan[i] += catalan[j] * catalan[i - j - 1];
            }
        }

        vector<int> ans;

        // Step 2: Calculate BSTs for each element as root
        for(int i = 0; i < n; i++) {
            int left = 0, right = 0;

            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                if(arr[j] < arr[i]) left++;
                else right++;
            }

            ans.push_back(catalan[left] * catalan[right]);
        }

        return ans;
    }
};