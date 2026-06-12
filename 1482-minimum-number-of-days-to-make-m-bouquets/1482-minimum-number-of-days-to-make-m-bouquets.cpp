class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m , int k){
        int count = 0;
        int total = 0;
        for(int i = 0; i< bloomDay.size(); i++){
            if(bloomDay[i] <= day) count++;
            else{
                total += count/k;
                count = 0;
            }
        }
        total += count/k;
        if(total >= m) return true;
        else return false;
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m* 1LL * k * 1LL;
        if(n < val) return -1;
        int ans = -1;
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for(int i = 0; i<n; i++){
            maxx = max(maxx, bloomDay[i]);
            minn = min(minn, bloomDay[i]);
        }
        int low = minn;
        int high = maxx;
        while(low <= high){
            int mid = (low + high)/2;
            if(possible(bloomDay, mid, m , k)) {
                ans =  mid;
                high = mid-1;
            }else low = mid+1;
        }
        return ans;
    }
};