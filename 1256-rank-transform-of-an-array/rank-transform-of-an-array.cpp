class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr){
        int n = arr.size();
        if(n==0) return arr;
        vector <int> v;
        for(int x : arr) v.emplace_back(x);
        sort(v.begin(),v.end());
        unordered_map <int,int> mp;
        int r = 1;
        for(int x : v){
            if(mp.find(x) == mp.end()) mp[x] = r++;
        }
        for(int &x : arr){
            x = mp[x];
        }
        return arr;
    }
};