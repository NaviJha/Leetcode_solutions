// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        int n = arr.size();
        reverse(arr.begin()+ l-1 , arr.begin()+r);
        return arr;
    }
};