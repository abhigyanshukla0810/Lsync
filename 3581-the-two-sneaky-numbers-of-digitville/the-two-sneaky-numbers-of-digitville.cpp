class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int freq[101]= {};
        vector <int> v;
        for(int &x: nums){
            freq[x]++;
            if(freq[x] == 2)v.emplace_back(x);
            
        }
        return v;
    }
};