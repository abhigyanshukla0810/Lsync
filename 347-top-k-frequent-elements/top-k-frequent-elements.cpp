class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mpp;
        for(int &x : nums) mpp[x]++;
        vector <pair<int,int>> v;
        for(auto p : mpp)
        {
            v.emplace_back(p.second, p.first);
        }
        sort(v.begin(),v.end(), greater<>());
        vector <int> ans;
        for(int i = 0; i<k; i++)
        {
            ans.emplace_back(v[i].second);
        }
        return ans;
        
    }
};