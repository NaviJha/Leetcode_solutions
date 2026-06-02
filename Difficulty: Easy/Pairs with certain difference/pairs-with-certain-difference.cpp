class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        int sum = 0;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int i = 0;
        while(i<n-1){
            if(abs(arr[i] - arr[i+1]) < k){
                sum += arr[i];
                sum += arr[i+1];
                i += 2;
            }else{
                i++;
            }
        }
        return sum;
    }
};