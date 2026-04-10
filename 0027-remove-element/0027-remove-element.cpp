class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // The "write" pointer for elements NOT equal to val
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                // If the current element is valid, write it at index k
                nums[k] = nums[i];
                k++; // Increment the count of valid elements
            }
        }
        
        // Return k, which is the count of elements not equal to val
        return k;
    }
};
