class Solution {
public:
    int digits(int n){
        int sum = 0;
        while(n>0){
            int ld = n%10;
            sum += ld;
            n /= 10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        //sort(nums.begin(), nums.end());
        for(int i = 0; i<n ; i++){
            int sd = digits(nums[i]);
            if(sd == i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};