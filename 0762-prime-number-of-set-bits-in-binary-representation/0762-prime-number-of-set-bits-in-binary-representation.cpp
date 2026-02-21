class Solution {
public:
    bool checkprime(int n ){
         if (n < 2) return false; 
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int countone(int n ){
        int count=0;
        bitset<32> binary_bits(n);
        string num = binary_bits.to_string();
        for(int i =0; i<num.length(); i++){
            if(num[i] == '1') count++;
        }
        return count;

    }
    int countPrimeSetBits(int left, int right) {
         int count = 0;
        for(int i = left; i<= right ; i++){
          int n = countone(i);
          if(checkprime(n)) count++;
        }
        return count;
    }
};