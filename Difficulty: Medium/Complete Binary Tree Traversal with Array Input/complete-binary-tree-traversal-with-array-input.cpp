class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int i = 0;
        int levelsize = 1;
        int n = arr.size();
        while(i <n){
            vector<int>level;
            for(int j = 0; j<levelsize && i < n; j++){
                level.push_back(arr[i++]);
            }
            sort(level.begin(), level.end());
            ans.push_back(level);
            levelsize *= 2;
        }
        return ans;
    }
};
