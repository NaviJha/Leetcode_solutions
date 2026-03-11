class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        bitset<64> binary_bits(n);
        string s = binary_bits.to_string();
        s.erase(0, s.find_first_not_of('0'));
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1') s[i] = '0';
            else s[i] = '1';
        }
        long long dec = stoll(s, nullptr, 2);
        return int(dec);
    }
};