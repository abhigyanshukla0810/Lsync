class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string, int> mpp;
        for(string x : words) mpp[x]++;
        vector <pair<int,string>> v;
        for(auto p : mpp)
        {
            v.emplace_back(p.second,p.first);
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b)
        {
            if(a.first==b.first)
            {
                return a.second<b.second;
            }
            return a.first>b.first;
        });
        vector <string> ans;
        for(int i = 0; i<k;i++)
        {
            ans.emplace_back(v[i].second);   
        }
        return ans;
    }
};