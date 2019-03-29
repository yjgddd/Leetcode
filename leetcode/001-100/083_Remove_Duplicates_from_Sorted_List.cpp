/*删除有序链表中的重复元素，使得每个元素只能出现一次。和P082类似，都用递归。不同的是对于重复的元素保留一个。*/
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head->next;
        if(temp->val!=head->val)
        head->next=deleteDuplicates(temp);
        else return deleteDuplicates(temp); 
        return head;
    }
};
