class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";
        if(sum > 9*num) return s;
        while(sum >= 9)
        {
            s +='9';
            sum -= 9;
            num--;
        }
        if(num>0 && sum > 0)
        {
            s += to_string(sum);
            num--;
        }
        while(num--)
        {
            s+='0';
        }
        return s;
    }
};