class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adj(n);   // ✅ initialize
        vector<int> indegree(n, 0);
        
        // Step 1: Build graph
        for(auto &temp : prerequisites){
            int u = temp[0];
            int v = temp[1];
            
            adj[v].push_back(u);   // v → u
            indegree[u]++;
        }
        
        // Step 2: Queue for BFS
        queue<int> q;
        
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        // Step 3: BFS (Topological Sort)
        int count = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            
            for(auto neighbor : adj[node]){
                indegree[neighbor]--;
                
                if(indegree[neighbor] == 0){
                    q.push(neighbor);
                }
            }
        }
        
        // Step 4: Check cycle
        return count == n;
    }
};