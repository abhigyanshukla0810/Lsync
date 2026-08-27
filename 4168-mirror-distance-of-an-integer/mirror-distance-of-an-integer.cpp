class Solution {
public:
    int mirrorDistance(int n) {
     string s = to_string(n);
     reverse(s.begin(),s.end());
     int p = stoi(s);
     return abs(p-n);   
    }
};