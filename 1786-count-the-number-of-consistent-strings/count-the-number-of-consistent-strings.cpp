class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int sum = n;
        unordered_set <char> st;
        for(char &x : allowed) st.insert(x);
        for(string &x : words)
        {
            for(char &y : x)
            {
                if(st.find(y) == st.end())
                {
                    sum--;
                    break;;
                }
            }
        }
        return sum;

    }
};