class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = 0,c = 0;
        for(int x : nums){
            if(a == 0) c = x;
            if(x == c) a++;
            else a--;
        }
        return c;
    }
};