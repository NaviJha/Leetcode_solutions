class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int ans = 0;
        int ant = 0;
        for(int i = 0; i<n; i++){
            if(moves[i] == 'U' ) ans = ans +1;
            else if(moves[i] == 'D' ) ans = ans - 1;
            else if(moves[i] == 'L' ) ant = ant -1;
            else ant += 1;
        }
        if((ans == 0) && (ant == 0)) return true;
        return false;
    }
};