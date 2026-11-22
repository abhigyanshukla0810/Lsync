class Solution {
public:
    bool checkString(string s) {
        int b = 0;
        for(char x : s)
        {
            if(x == 'b') b = 1;
            else
            {
                if(b == 1) return false;
            }
        }
        return true;
    }
};