class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum = 0;
        int prevone = 0, currone = 0;
        for(string &x : bank)
        {
            currone = 0;
            for(char y : x) if(y=='1') currone++;
            if(currone == 0) continue;
            sum += prevone*currone;
            prevone = currone;
        }
        return sum;
    }
};