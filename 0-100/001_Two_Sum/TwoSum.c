//直接双重循环的C语言解法,时间复杂度O(n^2)
int twoSum(int* nums, int numsSize, int target) 
{ 
    int i,j; 
    static int ans[2];
    for(i=0;i<numsSize;i++)
      for(j=i+1;j<numsSize;j++)
          if(nums[i]+nums[j]==target)
          {
              ans[0]=i;
              ans[1]=j;
              return ans;
              break;
          }
    return NULL;
}
