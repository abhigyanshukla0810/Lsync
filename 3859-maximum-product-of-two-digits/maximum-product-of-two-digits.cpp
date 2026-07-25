class Solution {
public:
    int maxProduct(int n) {
        if(n<=100) return (n%10)*(n/10);
        int max1 = 0, max2 = 0, x = 0;
        while(n>0){
            x = n%10;
            n /=10;
            if(x > max1){
                max2 = max1;
                max1 = x;
            }
            else if(x > max2) max2 = x;   
        }
        return max1*max2;
    }
};