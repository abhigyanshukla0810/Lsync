class Solution {
public:
    string smallestSubsequence(string s) {
    vector<int> freq(26, 0);
    vector<bool> visited(26, false);

    for (char x : s) freq[x - 'a']++;

    string stk;
    for (char x : s){

        freq[x - 'a']--;

        if (visited[x - 'a']) continue;

        while (!stk.empty() && stk.back() > x && freq[stk.back() - 'a'] > 0) {
            visited[stk.back() - 'a'] = false;
            stk.pop_back();
          }
        stk.push_back(x);
        
        visited[x - 'a'] = true;
    }
    return stk;
}     
};