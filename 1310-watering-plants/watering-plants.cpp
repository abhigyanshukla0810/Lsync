class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water = capacity;
        int steps = 0;
        int n = plants.size();
        for(int i = 0; i<n;)
        {
            if(water >= plants[i])
            {
                steps += 1;
                water -= plants[i++];
            }
            else
            {
                water = capacity;
                steps += i;
                steps += i+1;
                water -= plants[i++];

            }
        }
        return steps;
    }
};