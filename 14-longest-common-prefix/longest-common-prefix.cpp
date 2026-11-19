class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int N = strs.size();
        int n = 200;
        for(string &x : strs) n = min((int)x.size(),n);
        string ans = "";
        char anus;
        int i = 0;
        bool add = true;
        while(n--)
        {
            add = true;
            anus = strs[0][i];
            for(string x : strs)
            {
                if(x[i] != anus)
                {
                    add = false;
                    break;
                }
            }
            if(add) ans += anus;
            else return ans;
            i++;
        }
        return ans;
    }
};