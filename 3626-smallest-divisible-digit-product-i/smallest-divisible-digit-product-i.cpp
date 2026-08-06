class Solution {
public:
    int smallestNumber(int n, int t){
        if(t>=n) return t;

        if(t<10 && n<10){
            for(int i = n; i<10;i++){
                if(i%t == 0) return i;
            }
            return 10;
        }

        if(n==100) return n;
        for(int i = n; i<n+11;i++){
            if((i%10)*(i/10) % t == 0) return i;
        }

        return 0;
    }
};