class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n = c.size();
        int y = n/2;
        unordered_set <int>st;
        for(int x : c)st.insert(x);
        if(st.size() >=y) return y;
        return st.size();
    }
};