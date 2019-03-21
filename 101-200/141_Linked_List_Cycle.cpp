/*判断链表是否有环，可以设置快慢两个指针，慢指针一次移动一个结点，快指针一次移动两个结点，如果两个结点能够相遇，说明有环路，若在过程中有指针为NULL，
说明没有环路*/
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
    bool hasCycle(ListNode *head) {
        ListNode * slow=head,*fast=head;
        while(slow!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==NULL||fast==NULL) return false;
            if(slow==fast) return true;
        }
        return false;
    }
};
