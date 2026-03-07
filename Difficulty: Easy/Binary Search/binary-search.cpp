class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();   // n=17
        int left = 0;      // left = 0
        int right = n-1;
        int ans = -1;// right = 16
        while(left<=right){
            int mid = (left+right)/2;   //mid = 8 , k = 3
            if(k == arr[mid]) {
                ans =  mid;
                right = mid-1;
            }
            else if(k < arr[mid]) right = mid-1;
            else left = mid +1;
        }
        return ans;
    }
};