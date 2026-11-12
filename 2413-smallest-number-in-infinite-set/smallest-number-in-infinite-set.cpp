class SmallestInfiniteSet {
public:
priority_queue<int,vector<int>,greater<int>> q;
unordered_set<int> st;
int curr = 1;
    SmallestInfiniteSet() {

    }
    
    int popSmallest() {
        if(!q.empty())
        {
            int x = q.top();
            q.pop();
            if(st.count(x)) st.erase(x);
            return x;
        }
        return curr++;
    }
    
    void addBack(int num) {
        if(num >= curr || st.find(num) != st.end()) return;
        q.push(num);
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */