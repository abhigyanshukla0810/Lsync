class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums){
        for(int &x : nums){
            if(x>=10){
                int n = 0;
                long long sum = 0;
                while(x>0){
                    n = max(n,x%10);
                    sum++;
                    x/=10;
                }
                while(sum>0){
                    sum--;
                    x = x*10 + n;
                }
            }
        }
        int totalsum = 0;
        for(int x : nums) totalsum+=x;
        return totalsum;
    }
};