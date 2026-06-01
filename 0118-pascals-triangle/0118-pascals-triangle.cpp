class Solution {
public:
    vector<int> genrow(int row){
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int c = 1; c<row; c++){
            ans = ans * (row - c);
            ans = ans/c;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i<= numRows; i++){
            ans.push_back(genrow(i));
        }
        return ans;
    }
};