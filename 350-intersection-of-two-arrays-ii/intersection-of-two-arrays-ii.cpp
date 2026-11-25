class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr1[1001] = {0};
        int arr2[1001] = {0};
        for(int x : nums1) arr1[x]++;
        for(int x : nums2) arr2[x]++;
        vector <int> ans;
        for(int i = 0; i<1001;i++)
        {
            if(arr1[i] != 0 && arr2[i] != 0)
            {
                if(arr1[i] > arr2[i])
                {
                    while(arr2[i]--)
                    {
                        ans.emplace_back(i);
                    }
                }
                else 
                {
                    while(arr1[i]--)
                    {
                        ans.emplace_back(i);
                    }
                }
            }
        }
        return ans;


    }
};