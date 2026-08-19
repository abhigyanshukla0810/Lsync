class Solution {
public:
    vector<int> numberGame(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        int temp = 0;
        for(int i = 0; i<n-1;i+=2){
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
        return v;
    }
};