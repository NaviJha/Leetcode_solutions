class Solution {
public:
    bool isPalindrome(string s) {
        string st; 
        for(char c: s){
            if(isalnum(c))  st += tolower(c);
        }
        int l =0;
        int n = st.length();
        for( int i =l; i<n/2; i++){
            if(st[i] != st[n-i-1]) return false;
        }
        return true;
    }
};