class Solution {
public:
    int dayr(vector<int>& weights, int take){
        int day = 1;
        int load = 0;
        for(int i = 0; i<weights.size(); i++){
            if(load + weights[i] > take){
                day = day +1;
                load = weights[i];
            }
            else load += weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxx  = INT_MIN;
        int sum = 0;
        for(int i = 0; i<n; i++){
            maxx = max(maxx, weights[i]);
            sum += weights[i];
        }
        int low = maxx;
        int high = sum;
        int ans = 1;
        while(low <= high){
            int mid = (low + high)/2;
            int tdays = dayr(weights, mid);
            if(tdays <= days) {
                ans = mid;
                high = mid-1;
            } 
            else low = mid+1;
        }
        return ans;
    }
};