class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mod = 12345;

        int size = n * m;
        vector<long long> arr(size);
        
        // Step 1: Flatten matrix
        int k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arr[k++] = grid[i][j];
            }
        }

        // Step 2: Prefix product
        vector<long long> prefix(size, 1), suffix(size, 1);

        for(int i = 1; i < size; i++){
            prefix[i] = (prefix[i-1] * arr[i-1]) % mod;
        }

        // Step 3: Suffix product
        for(int i = size-2; i >= 0; i--){
            suffix[i] = (suffix[i+1] * arr[i+1]) % mod;
        }

        // Step 4: Build result
        k = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                grid[i][j] = (prefix[k] * suffix[k]) % mod;
                k++;
            }
        }

        return grid;
    }
};