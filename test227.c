class Solution {
public:
    vector<int> arr;
    int count = 0;
    int countArrangement(int N) {
        for (int i = 0; i < N; ++i) arr.push_back(i+1);
        countnumber(0);
        return count;
    }
    void countnumber(int pos) {
        if (pos >= arr.size()) {
            count ++;
            return;
        }
        for (int i = pos; i < arr.size(); ++i) {
            if (arr[i] % (pos+1) && (pos+1) % arr[i]) continue;
            swap(arr[pos], arr[i]);
            countnumber(pos+1);
            swap(arr[pos], arr[i]);
        }
    }
};

