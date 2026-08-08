class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> v(26,0);
        for(char c : s){
            v[c-'a']++;
        }
        int i  =0;
        for(char c : s){
            if(v[c-'a'] == 1) return i;
            else i++;
        }
        return -1;
    }
};