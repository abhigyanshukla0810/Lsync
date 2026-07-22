class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector <pair<int,string>> v;
        for(int i = 0; i<heights.size();i++){
            v.emplace_back(heights[i],names[i]);
        }
        sort(v.rbegin(),v.rend());
        vector <string> anal;
        for(auto it : v) anal.emplace_back(it.second);
        return anal;
    }
};