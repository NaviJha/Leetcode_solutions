class Solution {
  public:
    bool bs(vector<int> &arr, int target, int low, int high){
        if(low > high) return false;
        int mid = (low + high)/2;
        if(arr[mid] == target) return true;
        else if( arr[mid] < target) return bs(arr, target, mid+1, high );
        else return bs(arr, target, low, mid-1);
    }
    int binarySearchable(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(bs(arr, arr[i],  0, n-1)) ans++;
        }
        return ans;
        
        
    }
};