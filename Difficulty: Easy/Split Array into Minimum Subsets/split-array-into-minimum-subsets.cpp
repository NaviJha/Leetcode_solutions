class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int count = 1;
        for(int i = 0; i<n-1 ; i++){
            if(arr[i] + 1 == arr[i+1]){
                continue;
            }
            else{
                count++;
                
            }
        }
        return count;
    }
};
// 5 6 7 56 57 58 59 100 101 102 103