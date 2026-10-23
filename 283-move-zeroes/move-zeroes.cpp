class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int ans = 0;
        for(int i = 0; i<v.size();)
        {
            if(v[i] == 0)
            {
                v.erase(v.begin() + i);
                ans++;
            }
            else i++;
        }
        while(ans--)
        {
            v.emplace_back(0);
        }   
    }
};