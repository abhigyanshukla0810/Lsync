class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> sst;
        for(int x : nums) sst.insert(x);
        int x = 0, seq = 0, maxseq = 0;
        bool one = true;
        for(auto it : sst)
        {
            if(one)
            {
                x = it;
                seq++;
                maxseq = max(seq,maxseq);
                one = false;
                continue;
            }
            if((it - x) == 1){
                seq++;
                maxseq = max(seq,maxseq);
            }
            else{
                seq = 1;
            }
            x = it;
            maxseq = max(seq,maxseq);
        }
        return maxseq;
    }
};