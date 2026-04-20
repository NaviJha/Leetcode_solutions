class Solution {
public:
    int derangeCount(int n) {
        // Base cases
        if (n == 1) return 0;
        if (n == 2) return 1;

        // We only need the last two values to calculate the current one
        long long prev2 = 0; // !1
        long long prev1 = 1; // !2
        long long current = 0;

        for (int i = 3; i <= n; i++) {
            // Formula: !i = (i - 1) * (!(i - 1) + !(i - 2))
            current = (i - 1) * (prev1 + prev2);
            
            // Move pointers forward
            prev2 = prev1;
            prev1 = current;
        }

        return (int)prev1;
    }
};