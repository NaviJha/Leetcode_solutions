class Solution {
public:
    string addBinary(string a, string b) {
        int left = a.length() - 1;
        int right = b.length() - 1;
        int carry = 0;
        string ans = "";

        while (left >= 0 || right >= 0) {
            int bit1 = (left >= 0) ? a[left] - '0' : 0;
            int bit2 = (right >= 0) ? b[right] - '0' : 0;

            int sum = bit1 + bit2 + carry;
            ans.push_back((sum % 2) + '0');
            carry = sum / 2;

            left--;
            right--;
        }

        if (carry)
            ans.push_back('1');

        reverse(ans.begin(), ans.end());
        return ans;
    }
};