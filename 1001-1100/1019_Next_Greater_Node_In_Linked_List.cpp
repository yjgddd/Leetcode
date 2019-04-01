/*题目的大概意思是给定一个链表，找每个结点下一个比它那个结点的值，用数组存起来，如果不存在就返回0。比如链表2->1->5,下一个比2大的是5，比1大的是5，比5大
的不存在，是0，返回的数组就是[5,5,0]。这个题目首先想到的就是暴力解法，双重循环，然而这样复杂度就上去了，更优的解法是借用栈。先把链表的值保存在一个数组
ans里面。倒着操作数组，比如第i个数组值ans[i]是val，将栈中所有的比val值小的出栈，得到第一个比val值大的数,更新ans[i]为这个值（若不存在则更新为0）。再把
val压入栈，这样数组里的每个值都可以在栈中取到下一个比它大的值*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack <int> p;
        ListNode* temp=head;
        while(temp!=NULL) {ans.push_back(temp->val);temp=temp->next;}
        for(int i=ans.size()-1;i>=0;i--)
        {
            int val=ans[i];
            while(!p.empty()&&p.top()<=val) p.pop();
            if(p.empty()) ans[i]=0;
            else ans[i]=p.top();
            p.push(val);
        }
        return ans;
    }
};
