class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size(), m = word2.size(),x=0;
        vector<int> a(n, 0);
        int j = m-1;
        for(int i = n-1; i>=0;i--){
            if(j >= 0 && word1[i] == word2[j]){
                j--;
                x++;
            }
            a[i] = x;
        }
        j = 0;
        int i = 0;
        vector <int> v;
        bool chng = true;
        while(i<n && j<m){
            if(word1[i] == word2[j]){
                v.emplace_back(i);
                j++;
            }
            else if(chng && i < n-1 && a[i+1]>=(m-j-1)){
                v.emplace_back(i);
                j++;
                chng = false;
            }
            i++;
        }
        return  j == m ? v : vector <int> ();
    }
};