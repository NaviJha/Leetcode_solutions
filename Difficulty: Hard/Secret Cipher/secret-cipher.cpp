class Solution {
  public:
    string compress(string &s) {
        // code here
        int n=s.size();

        int j=n; // j = n = 11
        string ans=""; // ans = ""
        while(true){
            j=j/2;    // j = j/2 = 0
            ans="";
            while(j>0){     
                int len=j;    // len = 1
                string t1=s.substr(0,j);   // t1 = a
                string t2=s.substr(j,j);   // t2 = b

                // cout<<t1<<" "<<t2<<endl;

                if(t1==t2){   // yes
                    ans+=t1;   // ans = ab*c*d
                    ans+="*";
                    string rem=s.substr(2*j);   // rem = c*d
                    ans+=rem;    
                    // cout<<ans<<endl;
                    s=ans;     // s = ab*c*d
                    break;
                }
                else{
                    j--;
                }

            }
            if(j<=0)break;
        }

        return s;
    }
};
