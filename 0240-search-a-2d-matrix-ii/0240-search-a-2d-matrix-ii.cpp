class Solution {
public:
    bool bs(vector<int>& arr, int t){
        int low  = 0; 
        int high = arr.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid ] == t) return true;
            else if(arr[mid]< t) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool ans1 = false;
        bool ans2 = false;
        for(int i = 0; i<n; i++){
            ans1 =  bs(matrix[i], target);
            if(ans1 == true) return true;
        }
        return false;
        
        
    }
};