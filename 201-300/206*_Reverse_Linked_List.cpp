/*单链表的逆置，可以用两种方法，递归和迭代，此处用的是迭代，待总结思路*/
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
