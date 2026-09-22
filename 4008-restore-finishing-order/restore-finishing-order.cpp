class Solution {
public:
    vector<int> recoverOrder(vector<int>& s, vector<int>& friends) {
        unordered_set<int> stt;
        for(int x : friends)stt.insert(x);
        vector <int> v;
        for(int x : s){
            if(stt.find(x) != stt.end()) v.emplace_back(x);
        }
        return v;
    }
};