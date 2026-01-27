class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long reverse = 0;
        while(x>0){
            int ld = x%10;
            reverse = (reverse*10) + ld;
            x /= 10;
        }
        if(reverse == original) return true;
        return false;
    }
};