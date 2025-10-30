class Solution {
public:
    double myPow(double x, int n) {
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        double ans = 1.0;
        long b = n;
        if(n<0){
            x=1/x;
            b=-b;
        }
        while(b>0){
            if(b%2==1){
                ans = ans*x;
            }
            x = x*x;
            b=b/2;
        }
        return ans;
    }
};