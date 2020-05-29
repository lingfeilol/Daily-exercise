class ProductOfNumbers {
    vector<int> v;
public:
    ProductOfNumbers() {
        v.push_back(1);
    }
    
    void add(int num) {
        if(num==0)
        {
            v.clear();
            v.push_back(1);
        }
        else
        {
            int tmp=v.back()*num;
            v.push_back(tmp);
        }
    }
    
    int getProduct(int k) {
        if(k>=v.size()) return 0;
        return v.back() / v[v.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */