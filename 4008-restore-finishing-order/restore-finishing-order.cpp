class Solution {
public:
    vector<int> recoverOrder(vector<int>& s, vector<int>& friends) {
        unordered_set<int> stt;
        for(int x : friends)stt.insert(x);
        for(int i = 0; i<s.size();){
            if(stt.find(s[i]) == stt.end()) s.erase(s.begin()+i);
            else i++;
        }
        return s;
    }
};