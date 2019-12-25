class Solution {
public:
    double Power(double base, int exponent) {
        if(base==0&&exponent!=0) return 0;
        if(base!=0&&exponent==0) return 1;
        int i=exponent;
        double ret=1;
        if(i>0)
        {
           while(i--)
           {
            ret*=base;
           }
        }
        else{
            i=(-i);
            while(i--)
            {
                ret*=base;
            }
            ret=1.0/ret;
   
        }return ret;
    }
};