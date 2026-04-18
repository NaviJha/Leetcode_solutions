class Solution {
public:
    int rev(int n ){
        int r = 0;
        while(n>0){
            int ld = n%10;
            r = (r*10) + ld;
            n /= 10;
        }
        return r;
    }
    int mirrorDistance(int n) {
        int ans = abs(n - rev(n));
        return ans;
    }
};