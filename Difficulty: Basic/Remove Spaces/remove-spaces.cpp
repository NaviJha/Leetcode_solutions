class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int n = s.size();
        string st = "";
       // int ind = 0; 
        for(int i = 0; i<n ; i++){
            if(s[i] != ' '){
                st += s[i];
                //ind++;
            }
        }
        return st;
    }
};