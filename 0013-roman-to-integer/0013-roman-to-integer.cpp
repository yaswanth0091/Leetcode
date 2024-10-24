class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string letters[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<sizeof(values)/sizeof(values[0]);i++)
        {
            while(s.find(letters[i])==0)
            {
                result+=values[i];
                s=s.substr(letters[i].length());
            }
        }
        return result;
    }
};