class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x = abs(start[0] - target[0]);
        int y = abs(start[1] - target[1]);
        if((x+y)&1) return false;
        else return true;
        
    }
};