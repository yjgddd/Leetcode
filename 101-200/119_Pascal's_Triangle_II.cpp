//写了一个很残的O(n^2)复杂度的代码
class Solution {
public:
    vector<int> getRow(int rowIndex) {
       int a[34][34],i,j; 
       vector <int> b;
        a[i][0]=1;
       for (i=1;i<=rowIndex;i++)
       {
           a[i][0]=1;
           for(j=1;j<=i;j++)
           {
               a[i][j]=a[i-1][j-1]; 
               if(j!=i) a[i][j]+=a[i-1][j];
           } 
       }
       for(j=0;j<=rowIndex;j++)
       b.insert(b.begin(),a[rowIndex][j]);
       return b;
    }
};
//参考别人的代码写了一个新的，被思路惊呆了，运行时间打败了100%，emmmm
class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector <int> a(rowIndex+1,0);
       a[0]=1;
       for(int i=1;i<=rowIndex;i++)
           for(int j=i;j>=1;j--)
               a[j]+=a[j-1];
        return a;
    }
};