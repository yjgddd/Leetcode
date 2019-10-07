/*简单题。给定一个数组，将数组向右旋转k步，其中k为非负。 一开始看错了搞成左旋了，不过发现这样做也可以，由于k可能大于数组长度，先模一下长度，用长度减掉K,就是
左旋。在vector中操作就是把前面nums.size()-k%nums.size()个元素依次增加到后面。再把前面nums.size()-k%nums.size()个元素删除即可*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=nums.size()-k%nums.size();
        for(int i=0;i<k;i++)
        nums.push_back(nums[i]);
        vector< int >::iterator h=nums.begin();
        nums.erase(h,h+k);
    }
};
