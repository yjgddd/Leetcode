/*删除链表中值为val的元素*/
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val)
        head=head->next;
        ListNode* s=head;
        if(s==NULL)
        return head;
        while(s->next!=NULL)
        {
            if(s->next->val==val)
            s->next=s->next->next;
            else s=s->next;
        }
        return head;
    }
};
