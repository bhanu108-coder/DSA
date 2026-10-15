class Solution {
public:
    int fib(int n) {
        int c;
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(n>2)
        {
            c=fib(n-1)+fib(n-2);
        }
        return c;
    }
};