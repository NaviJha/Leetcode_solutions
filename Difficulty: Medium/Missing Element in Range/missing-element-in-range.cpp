class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int> hashset;
        int n = arr.size();
        vector<int> ans;
        for(int i =0; i<n; i++){
            hashset.insert(arr[i]);
        }
        for(int i =low; i<=high; i++){
            int item = i;
            

             

             if (hashset.count(i)) {
    // Element found
                continue;
             } else {
    // Element not found
                ans.push_back(i);
            }
            
        }
        return ans;
    }
};