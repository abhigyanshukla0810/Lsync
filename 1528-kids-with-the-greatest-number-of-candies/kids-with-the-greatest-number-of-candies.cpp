class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Max = 0;
        for(int &x : candies) if(x > Max) Max = x;
        vector <bool> v;
        for(int &x : candies)
        {
            if(x + extraCandies >= Max) v.emplace_back(true);
            else v.emplace_back(false);
        }
        return v;
    }
};