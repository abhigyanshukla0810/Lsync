class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        stack <char> st;
        int c = 0;
        int y = 0;
        
        for(int x : s){
            if(x == '('){
                st.push(x);
                y = st.size();
                c = max(c,y);
            }
            else if(x == ')') st.pop();
        }
        return c;
    }
};