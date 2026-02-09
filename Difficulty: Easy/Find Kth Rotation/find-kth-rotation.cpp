class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int min = arr[0];
        int min_i = 0;
        for(int i  =1; i<n; i++){
            if(arr[i] <min ) {
                min = arr[i];
                min_i = i;
            }
        }
        return min_i;
    }
};
