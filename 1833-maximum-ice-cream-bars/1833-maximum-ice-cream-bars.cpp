class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int sum = 0;
        int count = 0;
        sort(costs.begin(), costs.end());
        for(int i = 0; i<n; i++){
            if(sum + costs[i] <= coins){
                sum += costs[i];
                count++;
            }
            else break;
        }
        return count;
    }
};