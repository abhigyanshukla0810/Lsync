class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int open = 0, close = 0,sum = 0;
        for(char x : s)
        {
            if(x =='(') open++;
            else close++;
            if(close == open) sum = max(sum,2*open);
            else if(close > open) open = close = 0;
        }
        open = close = 0;
        for(int i = n-1;i>=0;i--)
        {
            if(s[i] == ')') close++;
            else open++;
            if(open == close) sum = max(sum, 2*open);
            else if(close < open) open = close = 0;
        }
        return sum;
    }
};