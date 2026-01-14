class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
           int ans = -1;
        for(int i=0; i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
            }
        }
        
        int second_ans=-1;
        for(int i=0; i<arr.size();i++){
            if(ans!=arr[i]){
                second_ans=max(second_ans,arr[i]);
            }
        }
        
        return second_ans;
    }
};