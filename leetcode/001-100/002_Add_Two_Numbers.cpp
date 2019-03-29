/*链表加法，要会C++链表的基本操作
链表中每个结点是一个数字，是倒着的，返回的链表同样要求倒叙。比如：
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;ListNode* pre=NULL;
        int temp=0;
        while(l1||l2)
        {
            int v1=l1?l1->val:0;
            int v2=l2?l2->val:0;
            int val=v1+v2+temp;
            temp=val/10;
            val%=10;
            ListNode* cur=new ListNode(val);
            if(!head)  head=cur;
            if(pre) pre->next=cur;
            pre=cur;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        if(temp>0) 
        {
         ListNode* l=new ListNode(temp);
         pre->next=l;
        }
        
        return head;
    }
};
