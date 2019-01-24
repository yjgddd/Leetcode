/*这题的意思是给一个数组，然后把0元素移动到数组末尾，要求不可以复制数组，就在原数组上操作。C++的vector上面我的操作是定义一个迭代器，
先删除0元素，记录个数temp，再在末尾加入temp个0*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size(),temp=0;
        vector<int>::iterator i;
        for(i=nums.begin();i<nums.end();)
        {
            if(* i==0) 
            {
                i=nums.erase(i);
                temp++;
            }
            else i++;
        }
        for(int j=0;j<temp;j++)
        nums.push_back(0);
    }
};
/*看到一个更机智的做法，遍历vector，然后如果不是0元素就写到vector的前面，最后再在后面空余位置补0。神仙思路*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size(),i=0,j=0;
        for(i=0;i<len;i++)
        {
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        for(;j<len;j++)
        nums[j]=0;
    }
};