class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
        for(int &x : nums) st.insert(x);
        int x = 0,seq = 0,maxseq = 0;
        for(auto it : st)
        {
            int x = it;
            seq = 1;
            while(st.find(x-1) != st.end()){
                x--;
                seq++;
                st.erase(x);
            }
            x = it;
            while(st.find(x+1) != st.end()){
                x++;
                seq++;
                st.erase(x);
            }
            maxseq = max(seq,maxseq);

        }
        return maxseq;

    }
};