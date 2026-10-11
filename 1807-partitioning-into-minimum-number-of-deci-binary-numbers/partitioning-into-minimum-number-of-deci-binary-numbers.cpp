class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(char &x : n)
        {
            if(x - '0' > ans) ans = x - '0';
        }
        return ans;
    }
};