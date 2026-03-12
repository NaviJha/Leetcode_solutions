class Solution {
public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> isFlipped(n, 0);
        
        int flip = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(i >= k)
                flip ^= isFlipped[i - k];
            if(arr[i] == flip) {
                if(i + k > n) return -1;
                isFlipped[i] = 1;
                flip ^= 1;
                count++;
            }
        }
        return count;
    }
};