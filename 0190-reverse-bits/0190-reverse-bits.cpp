
class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary_bits(n);
        string bin = binary_bits.to_string();
        reverse(bin.begin(), bin.end());
        int dec = stoi(bin, nullptr, 2);
        return dec;
    }
};