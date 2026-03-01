class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ind = 0; 
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                cnt++;
            }
        }
        if(cnt == 0) return;
        for(int i =0; i<n; i++ ){
            if(arr[i] != 0) {
                arr[ind] = arr[i];
                ind++;
            }
        }
        while(cnt!= 0){
            arr[ind] = 0;
            ind ++;
            cnt--;
        }
        
    }
};