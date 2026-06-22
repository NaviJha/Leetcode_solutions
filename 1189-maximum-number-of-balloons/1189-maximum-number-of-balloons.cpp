class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        map<char, int> mp;
        for(int i = 0; i<n; i++){
            mp[text[i]]++;
        }
        int b = mp['b'];
        int a = mp['a'];
        int l = mp['l']/2;
        int o = mp['o']/2;
        int nn = mp['n'];
        
        return min({b, a, l, o, nn});

    }
};