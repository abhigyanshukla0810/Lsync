class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        unordered_map <int,int> mpp;
        for(char x : s){
            mpp[x-'0']++;
        }
        int sum = 0;
        for(auto &[x,y] : mpp){
            sum += x*y;
        }
        return sum;
    }
};