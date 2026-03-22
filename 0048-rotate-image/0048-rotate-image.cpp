class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < m; j++) {
                if (i != j) {
                  swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            int left = 0;
            int right = m - 1;
            while (left <= right) {
                swap(matrix[i][left] , matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};

// 1 4 7 
// 2 5 8 
// 3 6 9