class Solution {
public:
    int orangesRot(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        // Step 1: Push all rotten oranges into queue
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 2){
                    q.push({i,j});
                }
                else if(mat[i][j] == 1){
                    fresh++;
                }
            }
        }

        // If no fresh oranges
        if(fresh == 0) return 0;

        int time = 0;
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};

        // Step 2: BFS
        while(!q.empty()){
            int size = q.size();
            bool rottenThisRound = false;

            for(int i = 0; i < size; i++){
                auto [x, y] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++){
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if(nx >= 0 && ny >= 0 && nx < m && ny < n && mat[nx][ny] == 1){
                        mat[nx][ny] = 2;
                        q.push({nx, ny});
                        fresh--;
                        rottenThisRound = true;
                    }
                }
            }

            if(rottenThisRound) time++;
        }

        // If still fresh oranges left
        return (fresh == 0) ? time : -1;
    }
};