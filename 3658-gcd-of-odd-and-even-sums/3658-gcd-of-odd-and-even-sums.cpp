class Solution {
public:
    int gcd(int osum, int esum){
        if(osum >= esum ){
            while(esum !=0){
                int r = osum %esum;
                osum = esum ;
                esum = r;
            }
            return osum;
        }
        else {
            while(osum != 0){
                int r = esum %osum;
                esum = osum ;
                osum = r;
            }
            return esum;
        }
        
    }
    int gcdOfOddEvenSums(int n) {
        int osum = n*n;
        int esum = n*(n+1);
        return gcd(osum, esum);
    }
};