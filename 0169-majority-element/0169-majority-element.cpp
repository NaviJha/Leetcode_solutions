class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele;
        int c = 0;
        for(int i = 0; i<n ; i++){
            if(c == 0){
                c = 1;
                ele = nums[i];
            }
            else if( nums[i] == ele) c++;
            else c--;
        }
        return ele;
        // int v = 0;
        // for(int i = 0;i<n; i++){
        //     if(nums[i] == ele ) v++;
        // }
        // if(v >n/2) return ele;
    }
    
    
};