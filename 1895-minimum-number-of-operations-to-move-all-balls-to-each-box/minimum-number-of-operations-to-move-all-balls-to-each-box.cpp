class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int> v;
        int n = boxes.size();
        vector <int> ans;
        for(int i = 0; i<n;i++)
        {
            if(boxes[i] == '1') v.emplace_back(i);
        }
        for(int i = 0; i<n;i++)
        {
            int sum = 0;
            for(int x : v)
            {
                sum += (abs(x - i));
            }
            ans.emplace_back(sum);
        }
        return ans;
    }
};