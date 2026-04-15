class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        if (words[startIndex] == target)
            return 0;
        bool exists = false;
        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                exists = true;
                break;
            }
        }
        if(exists == false) return -1;
        int ford = 0;
        int bacd = 0;
        int i = (startIndex + 1) % n;
        while (i != startIndex) {
            if (words[i] == target) {
                ford++;
                break;
            }
            ford++;
            i = (i + 1) % n;
        }
        i = (startIndex - 1 + n) % n;
        while (i != startIndex) {
            if (words[i] == target) {
                bacd++;
                break;
            }
            bacd++;
            i = (i - 1 + n) % n;
        }
        return min(ford, bacd);
    }
};