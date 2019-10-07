//矩阵顺时针旋转九十度，只能原地修改。方法是先上下翻转，再轴对称位置交换
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int len=matrix.size();
        for(int i=0;i<len;i++)
            for(int j=i;j<len;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
    }
};
