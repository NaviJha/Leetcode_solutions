class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int low = 1;
        int high = p;
        int ans = 0;
        // while(low <= high){
        //     int mid = (low + high)/2;
        //     if(mid*mid <= p){
        //         ans = mid;
        //         p = p - (mid*mid);
        //         low  = mid+1;
        //     }
        //     else high  = mid -1;
        // }
        // return ans;
        for(int i = 1; i<p ; i++){
            if(i*i <= p){
                ans = i;
                p = p - (i*i);
                
            }
            else break;
        }
        return ans;
    }
};
