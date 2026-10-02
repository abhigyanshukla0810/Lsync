class Solution {
public:
    int maxDistinct(string s) {
        int alpha[27] = {0};
        for(char x : s)
        {
            alpha[x-'a']++;
        }
        int sum = 0;
        for(int i = 0; i<26;i++)
        {
            if(alpha[i] > 0) sum++;

        }
        return sum;

    }
};