class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};
        for(int d : digits)freq[d]++;
        int ans = 0;
        for (int num = 100; num <= 998; num += 2) {
            int x = num;
            int needed[10] = {};
            while(x>0){
                needed[x % 10]++;
                x /= 10;
            }
            bool possible = true;
            for(int d = 0; d <= 9; d++) {
                if(needed[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }
            if(possible)ans++;
        }
        return ans;
    }
};