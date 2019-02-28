/*删除链表中倒数第n个结点，先求出链表长度，倒数第n个相当于正数第len-n+1个，定位到待删除结点的前一个结点删除即可*/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head,*head1=head;
        int len=0,cur;
        while(head->next!=NULL)
        {
             head=head->next;
             len++;
        }
        cur=len-n+1;
        if(cur==0) {head1=head1->next;return head1;}
        while(cur!=1)
        {
            temp=temp->next;
            cur--;
        }
        temp->next=temp->next->next;
        return head1;
    }
};
