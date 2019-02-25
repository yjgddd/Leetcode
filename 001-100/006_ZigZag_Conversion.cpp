/*给出一个字符串以及行数，根据该行数进行Z字形排列（自上而下，自左而右）比如：
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Explanation:
P   A   H   N
A P L S I I G
Y   I   R
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
看了discuss中的思路AC如下。对行数进行操作，一开始行数++,到最后一行后行数--，不断循环。
*/
class Solution {
public:
    string convert(string s, int numRows) {
    if(numRows==1) return s;
    int row=0,step=0,i;
    string a[numRows],ans="";
    for(i=0;i<s.size();i++)
    {
        a[row].push_back(s[i]);
        if(row==0) step=1;
        else if(row==numRows-1) step=-1;
        row+=step;
    }
    for(i=0;i<numRows;i++)
    ans+=a[i];
    return ans;
    }
};
