class Solution {
public:
    int minPartitions(string n) {
      int si = n.size(); 
      char max = '0';
      for(int i = 0; i <si; i++){
        if(n[i]>max){
            max = n[i];
        }

      }
      int ans = (int(max))-48;
      return ans;
    }
};