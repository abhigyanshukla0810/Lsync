class Solution {
public:
    bool stoneGame(vector<int>& piles){
        int l = 0, sum1 = 0, sum2 = 0, r = piles.size() -1;
        while(l < r){
            if(piles[l] > piles[r]){
                sum1 += piles[l];
                l++;
            }
            else{
                sum1 +=piles[r];
                r--;
            }
            if(piles[l] > piles[r]){
                sum2 += piles[r];
                r--;
            }
            else{
                sum2 += piles[l];
                l++;
            }
        }
        if(sum1 >= sum2) return true;
        else return false;
    }
};