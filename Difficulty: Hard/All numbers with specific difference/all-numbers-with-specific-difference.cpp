class Solution {
  public:
    int sum(int i ){
        int s = 0;
        int ld = 0;
        while(i>0){
            ld = i%10;
            s = s+ld;
            i = i/10;
        }
        return s;
    }
    int getCount(int n, int d) {
        // code here
       int left = 0;
       int right = n;
       int start = -1;
       while(left<=right){
           int m = (left+right)/2;
           if(m - sum(m)>= d){
               start = m;
               right = m-1;
           }else{
               left = m+1;
           }
       }
       if(start == -1) return 0;
       return n-start+1;
    }
};