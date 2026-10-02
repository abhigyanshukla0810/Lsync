class Solution {
public:
    int maxDistinct(string s) {
        unordered_set <char> st;
        for(char x : s) st.insert(x);
        return st.size();

    }
};