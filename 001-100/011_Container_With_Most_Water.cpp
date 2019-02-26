/*给定n个非负整数a1，a2，...，an，其中每个数表示坐标（i，ai）处的点。 绘制n条垂直线，使得线i的两个端点位于（i，ai）和（i，0）。 
找到两条线，它们与x轴一起形成一个容器，这样容器就含有最多的水。注意：您可能不会倾斜容器，n至少为2。

思路1：先用双重循环，找所有可能的两条线组合，秒AC了，但显然事情并没有这么简单。O(n^)的复杂度，提交后21244 ms, faster than 25.87% 。

思路2：不能满足与此，看看Discuss。找一个O(n)的复杂度的解法，首先，首先使用第1条线和最后条线确定一个最宽的容器。所有其他可能的容器都不太宽，
所以为了容纳更多的水，它们需要更高。因此，在评估最宽的容器之后，跳过不支持更高高度的两端的线。然后再判断新的容器是不是容量更大。重复
上述过程直到没有剩下可能的容器。AC后，20 ms, faster than 98.54% 
*/
//O(n^2)的解法
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,i,j;
        for(i=0;i<height.size();i++)
        for(j=height.size()-1;j>i;j--)
        if((j-i)*min(height[i],height[j])>ans) ans=(j-i)*min(height[i],height[j]);
        return ans;
    }
};
//O(n)的解法
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,i=0,j=height.size()-1,k=0;
        while(i<j)
        {
            k=min(height[i],height[j]);
            ans=max(ans,k*(j-i));
            if(height[i]<=k&&i<j) i++;
            if(height[j]<=k&&i<j) j--;
        }
        return ans;
    }
};
