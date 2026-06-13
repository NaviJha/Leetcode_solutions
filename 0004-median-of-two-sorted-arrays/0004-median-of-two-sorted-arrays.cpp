class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
         int j = 0;
         while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m ){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        
        int h = (m+n);
        if(h %2 == 1){
            return  ans[h/2];
        }
        else{
           int ind1 = h/2 -1;
            int ind2 = h/2;
            return (double)((double)ans[h/2] + (double)ans[h/2 -1])/ 2.0; 
        }
        return -1;
    }
};