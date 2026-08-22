class Solution {
public:
    int evalRPN(vector<string>& v) {
        int a = 0, b = 0,c = 0;
        stack <int> st;
        for(string x : v){
            if(x =="+"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                c = a+b;
                st.push(c);
            }
            else if(x =="-"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                c = b-a;
                st.push(c);
            }
            else if(x =="/"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                c = b/a;
                st.push(c);
            }
            else if(x =="*"){
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                c = a*b;
                st.push(c);
            }
            else{
                a = stoi(x);
                st.push(a);
            }
        }
        return st.top();
    }
};