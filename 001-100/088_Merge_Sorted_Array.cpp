/*给两个排序好的数组nums1和nums2, 将nums2合并到nums1中并且仍然保持有序。由于nums1末尾已经预留出足够的空间，可以把nums2复制过去，然后再调用sort函数
注意C++的nums1和nums2都是vetor,sort函数在对vector进行排序的时候，第一个参数和第一个参数都是迭代器，因此sort(nums1.begin(),nums1.begin()+m+n);
本做法faster than 100.00% 
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j=0;
        for(i=m;i<nums1.size();i++)
            nums1[i]=nums2[j++];
        sort(nums1.begin(),nums1.begin()+m+n);
    }
};
