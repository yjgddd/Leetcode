/*单链表的逆置，可以用两种方法，递归或者迭代*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//迭代AC代码
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* L=NULL,*M=NULL,*R=head;
        if(head==NULL) return NULL;
        while(R->next!=NULL)
        {
            L=M;
            M=R;
            R=R->next;
            M->next=L;    
        }
        R->next=M;
        return R;
    }
};
//递归AC代码
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* newhead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }
};
