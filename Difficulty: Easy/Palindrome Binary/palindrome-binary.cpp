class Solution {
  public:
    bool ispalindrome(string s){
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isBinaryPalindrome(int n) {
        // code here
        bitset<32> binary_bits(n);
        string s = binary_bits.to_string();
        s.erase(0, s.find_first_not_of('0'));
        if(ispalindrome(s)) return true;
        else return false;
    }
};