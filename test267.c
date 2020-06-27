class Solution {
public:
    string intToRoman(int num) {
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> reps={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string res;
        for(int i=0; i<13; i++){   //从大到小判断每一个子情况
            while(num>=values[i]){
                num -= values[i];
                res += reps[i];//拼接答案
            }
        }
        return res;
    }
};