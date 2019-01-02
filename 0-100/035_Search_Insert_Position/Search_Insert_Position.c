int searchInsert(int* nums, int numsSize, int target) {
     int  i;
     if(nums[0]>target) return 0;
     for(i=0;i<numsSize;i++)
     {
         if(nums[i]==target) return i;
         else if(nums[i]<target&&nums[i+1]>target&&(i+1)<numsSize) return i+1;
     }
    return i;
}