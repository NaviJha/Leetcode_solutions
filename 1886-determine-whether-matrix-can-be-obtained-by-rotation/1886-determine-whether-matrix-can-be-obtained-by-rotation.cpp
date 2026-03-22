class Solution {
public:
    void rotaten(vector<vector<int>> &mat){
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i<m; i++){
            for(int j = i+1; j<n; j++){
                swap(mat[i][j] , mat[j][i]);
            }
        }
        for(int i = 0; i<m; i++){
            int l = 0;
            int r = n-1;
            while(l <= r){
                swap(mat[i][l], mat[i][r]);
                l++;
                r--;
            }
            
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size();
        int n = mat[0].size();
        int count1 = 0;
         int count0 = 0;
         for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j]  == 0 ) count0++;
                else count1++;
                if(target[i][j]  == 0 ) count0--;
                else count1--;
            }
         }
         if(count1 != 0 || count0 != 0 ) return false;
        int c = 0;
        while(c <= m+1){
            if(mat == target) return true;
            rotaten(mat);
            c++;
        }
        return false;      //1 1       1 0   =  0 1
                           // 0 1  =   1  1     1 1 
    }
    
};