class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        vector<vector<bool>>v(n, vector<bool>(n,false));
        vector<int> ans; 
        //.push_back(mat[0][0]);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                int r  = i;
                int c = j;
                while(  c>=0 && r <n && v[r][c] == false){
                    ans.push_back(mat[r][c]);
                    v[r][c] = true;
                    r = r+1;
                    c = c-1;
                }
            }
        }
        //ans.push_back(mat[n-1][n-1]);
        return ans;
        
    }
};
// 8 3 10 3 
// 0,0 
// 0,1 -> 1,0 
// 0,2 -> 1,1 ->2,0 
// 1,2 -> 2,1
// 2,2 
