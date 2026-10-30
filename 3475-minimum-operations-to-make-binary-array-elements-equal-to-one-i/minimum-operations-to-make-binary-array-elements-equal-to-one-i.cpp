class Solution {
public:
    int minOperations(vector<int>& v) {
        int n = v.size();
        int sum = 0;
        for(int i = 0; i<n-2; i++)
        {
            if(v[i] == 0)
            {
                sum++;
                v[i] = 1;
                v[i+1] = (v[i+1] > 0 ? 0 : 1);
                v[i+2] = (v[i+2] > 0 ? 0 : 1);
            }
        }
        if(v[n-1] == 0 || v[n-2] == 0) return -1;
        return sum;
    }
};