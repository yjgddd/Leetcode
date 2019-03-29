/*链表的基本操作，合并两个有序的链表，两个指针指向两个链表，每次找较小的那个插入新链表中，知道其中一个链表为空，再把不为空的链表整体插入到新链表末尾*/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode(INT_MIN);
        ListNode *l=dummy;
        while(l1!=NULL&&l2!=NULL)
        {
            if((l1->val)<(l2->val)) {l->next=l1;l1=l1->next;}
            else {l->next=l2;l2=l2->next;}
            l=l->next;
        }
        l->next=l1?l1:l2;
        return dummy->next;
    }
};
