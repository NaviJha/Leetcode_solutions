class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
        int n = arr.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[j-1] < arr[j]) count++;
                else break;
            }
        }
        return count;
    }
};
