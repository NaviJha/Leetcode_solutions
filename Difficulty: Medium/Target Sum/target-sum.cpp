class Solution {
  public:
    void fun(vector<int>&arr, int i , int t, int n, int &count){
        if(i == n){
            if(t==0){
                count++;
            }
            return;
        }
        
        if(arr[i]<=t){
            fun(arr, i+1, t-arr[i], n, count);
        }
        fun(arr, i+1,t, n, count);
    }
    
    int totalWays(vector<int>& arr, int target) {
        //  code here
        int sum = 0;
        int n = arr.size();
        for(int i =0; i<n; i++){
            sum += arr[i];
        }
        // p+n = sum 
        // p-n = target
        // 2p = sum + target
        // p = (sum+target)/2;
        int x = (sum+target);
        if(x%2!= 0)return 0;
        else{
            x = x/2;
            int count =0;
            fun(arr,0, x, n, count);
            return count;
        }
        return 0;
    }
};

