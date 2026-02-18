class Solution {
  public:
    int merge(vector<int> &arr, int l , int mid, int r){
        vector<int> temp1;
        int left = l; 
        int count = 0;
        int right = mid+1;
        while(left <= mid && right <= r){
            if(arr[left] <= arr[right]){
                temp1.push_back(arr[left]);
                 left++;
                
            }else{
                temp1.push_back(arr[right]);
                
                count += mid-left+1;
                right++;
            }
            
        }
        while(left<=mid){
            temp1.push_back(arr[left]);
            left++;
        }
        while(right<=r){
            temp1.push_back(arr[right]);
            right++;
        }
        for(int i =l; i<=r; i++){
            arr[i] = temp1[i-l];
        }
        return count;
        
    }
    int mergesort(vector<int> &arr, int l , int r){
        if(l >=r) return 0;
        int count =0;
        int mid = (l+r)/2;
        count += mergesort(arr, l , mid);
        count += mergesort(arr, mid+1, r);
        count += merge(arr, l , mid , r);
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergesort(arr, 0 , arr.size()-1);
    }
};