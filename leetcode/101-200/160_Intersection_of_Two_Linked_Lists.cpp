/*求两个链表的交点，方法是如果两个链表长度相同，直接挨个比较即可，如果链表长度不相同，则把长的链表前面去掉，使得两个链表长度相同，再依次比较*/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *head1=headA,*head2=headB;
        int len1=0,len2=0;
        if(headA==NULL||headB==NULL) return NULL;
        while(head1!=NULL)
        {
            head1=head1->next;
            len1++;
        }
        while(head2!=NULL)
        {
            head2=head2->next;
            len2++;
        }
        if(len1>len2){
            while(len1>len2)
            {
                headA=headA->next;
                len1--;
            }
        }
        if(len1<len2){
            while(len1<len2)
            {
                headB=headB->next;
                len2--;
            }
        }
        while(headA!=NULL&&headB!=NULL)
        {
            if(headA==headB) return headA;
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
        return NULL;
    }
};
