class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        int alen=a.size(),blen=b.size();
        int k=abs(alen-blen);
        if(alen < blen)
        {
            while(k--) a.insert(a.begin(),'0');
        }
        else
        {
            while(k--) b.insert(b.begin(),'0');
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int next=0;
        while(i<a.size())
        {
            int x=a[i]-'0',y=b[i]-'0';
            int tmp=x+y+next;
            if(tmp > 1)
            {
                next = 1;
                tmp-=2;
            }
            else
                next=0;
            ret+=tmp+'0';
            i++;
        }
        if(next==1)
            ret+='1';
        reverse(ret.begin(),ret.end());
        return ret;
    }
};