class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> st1;
        unordered_set <int> st2;
        for(int &x : nums1) st1.insert(x);
        for(int &x : nums2) st2.insert(x);
        vector <int> v;
        for(auto it : st1)
        {
            if(st2.find(it) != st2.end())
            {
                v.emplace_back(it);
            }
        }
        return v;

    }
};