/*将数字用罗马数字表示，数字范围是0-3999，规则如下：
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
解题思路是用一个二维数组表示罗马数字，每个数字都是由这些组合而成。0-9,10-100,100-900,1000-3000。
*/
class Solution {
public:
    string intToRoman(int num) {
        string a[4][11]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},
                  {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                  {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                  {"","M","MM","MMM"}
                 };
        string ans;
        int count=0;
        while(num!=0)
        {
            ans.insert(0,a[count][num%10]);
            num/=10;
            count++;
        }
        return ans;
        
    }
};
