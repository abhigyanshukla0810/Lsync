class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int LSum = 0, RSum = 0;
        int LQ = 0, RQ = 0;
        for (int i = 0; i<n/2;i++){
            if (num[i] == '?') LQ++;
            else LSum +=num[i]-'0';
        }
        for (int i = n/2; i<n;i++){
            if (num[i] == '?') RQ++;
            else RSum +=num[i]-'0';
        }
        int diff = LSum-RSum;
        int qDiff = LQ-RQ;
        return 2*diff != 9*((RQ - LQ));
    }
};