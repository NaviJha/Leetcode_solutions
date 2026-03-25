class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long total_sum = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                 total_sum += grid[i][j];
            }
        }
         if (total_sum % 2 != 0) return false;

        long long r_sum = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                 r_sum += grid[i][j];
            }
            if(total_sum - r_sum == r_sum) return true;
        }
        long long c_sum = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                 c_sum += grid[j][i];
            }
            if(total_sum - c_sum == c_sum) return true;
        }
        return false;
        
    }
};