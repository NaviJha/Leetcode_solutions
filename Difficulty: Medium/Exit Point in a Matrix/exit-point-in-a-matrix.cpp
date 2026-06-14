class Solution {
  public:
    vector<int> exitPoint(vector<vector<int>>& mat) {
        // code here
        vector<int> ans;
        int n = mat.size();
        int m = mat[0].size();
        int i=0,j=0;
        int dx[4]={0,1,0,-1};
        int dy[4]={1,0,-1,0};
        int move = 0;
        while(true){
            int curr = mat[i][j];
            vector<int> currIndices = {i,j};
            if(curr == 0){
                i+= dx[move];
                j+= dy[move];
            }else{
                mat[i][j]=0;
                move = (move + 1) % 4;
                i += dx[move];
                j += dy[move];
            }
            if(i<0 || i>=n || j<0 || j>=m){
                ans = currIndices;
                break;
            }
        }
        
        return ans;
    }
};