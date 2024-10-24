class Solution {
public:
    string intToRoman(int num) {
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string letters[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string result;
        for(int i=0;i<sizeof(values)/sizeof(values[0]);i++)
        {
            while(num>=values[i])
            {
                result.append(letters[i]);
                num-=values[i];
            }
        }
        return result;
    }
};