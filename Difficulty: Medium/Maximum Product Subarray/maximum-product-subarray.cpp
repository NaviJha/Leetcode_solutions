class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int ans = arr[0];
        int p1 = arr[0];
        int p2 = arr[0];
        for(int i =1; i<n; i++){
            int temp = max(arr[i], max(arr[i]*p1 , arr[i]*p2));
            p2 = min(arr[i], min(arr[i] *p1, arr[i]*p2));
            p1 = temp;
            if(p1>ans)  ans = p1;
        }
        return ans;
        
    }
};
// p1=p2=-2
// n=6
// i=1, arr[1] =6
// p1 =(6,-12) = 6
// p2 = -12
// 