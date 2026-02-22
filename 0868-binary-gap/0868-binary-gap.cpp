class Solution {
public:
    int binaryGap(int n) {
        int lg = 0; 
        bitset<32> binary_bits(n);
        string s = binary_bits.to_string();

        int d = 0;
        int right = 0;
        int low = -1;   // no '1' found yet
        int high = 0;

        while (right < s.length()) {
            if (s[right] == '1') {
                if (low != -1) {      // we already found a previous '1'
                    high = right;
                    d = high - low;
                    if (lg < d) lg = d;
                }
                low = right;          // update last seen '1'
            }
            right++;
        }

        return lg;
    }
};