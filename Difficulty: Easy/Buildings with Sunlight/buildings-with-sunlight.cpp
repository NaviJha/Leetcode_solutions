class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxx = arr[0];
        int count = 1;
        for(int i = 1; i<n; i++){
            if(arr[i] >= maxx){
                count++;
                maxx = max(maxx, arr[i]);
            }
        }
        return count;
    }
};