class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
         int j = 0;
         int k = 0;
         while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                k++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        while(i < m ){
            ans.push_back(nums1[i]);
            i++;
            k++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
            k++;
        }
        for(int l = 0; l<k ; l++){
            nums1[l] = ans[l];
        }
    }
};