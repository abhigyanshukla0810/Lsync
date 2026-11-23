class ProductOfNumbers {
public:
vector <int> v;

    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.emplace_back(num);
    }
    
    int getProduct(int k) {
        int x = 1;
        int n = v.size(), i = 0;
        while(k--)
        {
            x *= v[n-i-1];
            i++;
        }
        return x;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */