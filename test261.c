class Solution {
    string p;
    bool compare(string& a,string& b)
    {
        int i=0;
        while(i<a.size()&& i<b.size()&& a[i]==b[i])
        {
            i++;
        }
        if(i==a.size()|| i==b.size()) return a.size()<b.size();
        return p.find(a[i])<p.find(b[i]);    
    }
public:
    bool isAlienSorted(vector<string>& words, string order) {
        p=order;
        int n=words.size();
        for(int i=1;i<n;i++)
        {
            if(!compare(words[i-1],words[i]))
                return false;
        }
        return true;
    }
};