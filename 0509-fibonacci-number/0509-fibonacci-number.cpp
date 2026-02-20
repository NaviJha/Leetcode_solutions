class Solution {
public:
    int fib(int n) {
        int a =0;
        int b =1;
        if(n <=1) return n;
        else return fib(n-1)+fib(n-2);
    }
};