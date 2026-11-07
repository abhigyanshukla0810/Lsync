class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> q(gifts.begin(),gifts.end());
        while(k--)
        {
            long long x = q.top();
            q.pop();
            x = sqrt(x);
            q.push(x);
        }
        long long sum = 0;
        while(!q.empty())
        {
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};