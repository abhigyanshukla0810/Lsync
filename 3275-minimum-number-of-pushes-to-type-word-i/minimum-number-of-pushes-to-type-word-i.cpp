class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n<=8) return n;
        else if(n<=16){
            n -= 8;
            return 8 + 2*n;
        }
        else if(n<=24){
            n -= 16;
            return n*3 + 24;
        }
        else{
            n -= 24;
            return n*4 + 48;
        }
    }
};