/*返回指向链表后半段的指针，比如[1,2,3,4,5]返回[3,4,5]，[1,2,3,4,5,6]返回[4,5,6]。求出链表的长度。再把ans指针定位到链表中间即可*/
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
    ListNode* middleNode(ListNode* head) {
        ListNode* ans;
        ListNode* temp=head;
        int len=0;
        while(temp->next!=NULL){
             temp=temp->next;
             len++;
        }
        if(len%2) len++;
        len/=2;
        while(len--&&head)
        {
            head=head->next;
        }
        ans=head;
        return ans;
    }
};
