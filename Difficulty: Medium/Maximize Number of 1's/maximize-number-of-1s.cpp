class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int ans =0;
        int left=0;
        int right=0;
        while(right<n){
            if(arr[right] == 0){
                k--;
            }
            while(k<0){
                if(arr[left] == 0)  k++;
                left++;
            }
            ans = max(ans, right-left+1);
        right++;    
        }
        return ans;
        
        
    }
};
