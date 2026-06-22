class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Beech ke bars ki sankhya = right - left - 1
            int current_area = min(height[left], height[right]) * (right - left - 1);
            
            // Max area update karein
            ans = max(ans, current_area);
            
            // Chhoti height waale pointer ko move karein
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return ans;
    }
};