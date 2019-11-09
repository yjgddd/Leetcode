class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int left=0,right=nums.size()-1,ans;
       while(1)
       {
           int index=partition(nums, left, right);
           if(index==k-1){ans=nums[index];break;}
           if(index<k-1) left=index+1;
           if(index>k-1) right=index-1;
           
       }
       return ans;
    }
    int partition(vector<int>& nums,int left,int right){
        int val=nums[left],l=left+1,r=right;
        while(l<=r)
        {
            if(nums[l]<val&&nums[r]>val)
                swap(nums[l++],nums[r--]);
            if(nums[l]>=val) l++;
            if(nums[r]<=val) r--;
        }
        swap(nums[left],nums[r]);
        return r;
    }
};
/*第k大元素，重复的也算在内。可以用快排思想。每次将数组划分为两段，并且返回划分点的位置，如果这个位置恰好是我们要的第k大的数，那么返回这个数即可，
否则如果返回的位置小于要找的位置，则向右边的一半数组继续寻找如果返回的位置大于要找的位置，则向左边寻找*/
