class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = (n*(n+1))/2, sum2 = 0;
        int i = n;
        while(sum1 > sum2 && i>=1){
            sum1 -= i;
            sum2 += i;
            if(sum1 + i == (sum2 )) return i;
            i--;
        }
        return -1;
    }
};