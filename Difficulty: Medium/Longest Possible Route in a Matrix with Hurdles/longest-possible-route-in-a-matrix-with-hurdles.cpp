class Solution {
  public:
    void dfs(int length, int r, int c, int xd, int yd, vector<vector<int>> &mat, vector<vector<int>> &vis, 
int n, int m, int dr[4], int dc[4], int &ans){
    vis[r][c] = 1;
    
    if(r==xd && c==yd){
        ans = max(ans, length);
    }
    
    for(int i=0; i<4;i++){
        int nr = r + dr[i]; int nc = c  +dc[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && mat[nr][nc]!=0){
            dfs(length+1, nr, nc, xd, yd, mat, vis, n, m, dr, dc, ans);
        }
    }
    vis[r][c] = 0;
}
int longestPath(vector<vector<int>> & mat, int xs, int ys, int xd, int yd) {
int n = mat.size(); int m = mat[0].size();
vector<vector<int>>vis(n, vector<int>(m, 0)); int ans = -1e9;
int dr[4] = {-1, 0, 1, 0}; int dc[4] = {0, 1, 0, -1};
dfs(0, xs, ys, xd, yd, mat, vis, n, m, dr, dc, ans);
return ans==-1e9 ? -1 : ans;
}
};