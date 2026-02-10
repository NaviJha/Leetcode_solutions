class Solution {
  public:
    int find(int m , vector<int>arr){
        int count = 0;
        for(int num: arr){
            count += ceil((double)num/ (double) m);
        }
        return count;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
       int l = 1;
       int h = INT_MIN;
       for(int i : arr){
           h = max(i , h);
       }
       int ans = h;
       while(l <= h){
           int m = (l+h)/2;
           int minhour = find(m, arr);
           if(minhour<=k){
               ans = m;
               h = m-1;
           }else{
               l = m +1;
           }
       }
       return ans;
    }
};
// i=10, 
// ans =5
// j = 1, arr[j] = 10
//ne = 10
// compare =1