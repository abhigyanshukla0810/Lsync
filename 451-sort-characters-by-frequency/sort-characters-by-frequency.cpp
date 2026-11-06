class Solution {
public:
    string frequencySort(string s){
        unordered_map <char,int> mpp;
        for(char x : s) mpp[x]++;
        vector <pair<int, char>> v;
        for(auto p : mpp)
        {
            v.emplace_back(p.second,p.first);
        }
        sort(v.begin(),v.end(),greater<>());
        string ans = "";
        for(int i = 0; i<v.size(); i++)
        {
            while(v[i].first >0)
            {
                v[i].first--;
                ans += v[i].second;
            }
        }
        return ans;
    }
};