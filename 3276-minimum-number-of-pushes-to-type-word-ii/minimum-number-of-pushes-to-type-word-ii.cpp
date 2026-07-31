class Solution {
public:
    int minimumPushes(string word) {
        vector <int> v(26,0);
        for(char x : word) v[x - 'a']++;
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for(int i = 0; i<8;i++){
            sum += v[i];
        }
        for(int i = 8; i<16;i++){
            sum += v[i]*2;
        }
        for(int i = 16; i<24;i++){
            sum += v[i]*3;
        }
        sum += v[24]*4 + v[25]*4;
        return sum;
    }
};