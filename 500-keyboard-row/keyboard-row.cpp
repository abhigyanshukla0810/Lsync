class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a = "qwertyuiop";
        string b = "asdfghjkl";
        string c = "zxcvbnm";

        vector<string> ans;

        for(string s : words)
        {
            int x = 0;
            char ch = tolower(s[0]);

            if(a.find(ch) != string::npos) x = 1;
            else if(b.find(ch) != string::npos) x = 2;
            else x = 3;

            bool rand = true;

            for(char i : s)
            {
                i = tolower(i);

                if(x == 1 && a.find(i) == string::npos) rand = false;
                if(x == 2 && b.find(i) == string::npos) rand = false;
                if(x == 3 && c.find(i) == string::npos) rand = false;
            }

            if(rand) ans.emplace_back(s);
        }

        return ans;
    }
};