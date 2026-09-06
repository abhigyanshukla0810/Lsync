class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> v;
        int n = words.size(), k =0;
        for(int i = 0; i<n;i++){
            k = words[i].size();
            for(char j : words[i]){
                if(j == x){
                    v.emplace_back(i);
                    break;
                }
            }
        }
        return v;
    }
};