/*给一个排序过的链表，删除所有含有重复数字的结点。比如
Input: 1->2->3->3->4->4->5
Output: 1->2->5
解题思路：递归。见注释。
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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL||head->next==NULL) return head;
       ListNode* temp=head->next;
       if(temp->val!=head->val)
       {
           head->next=deleteDuplicates(temp);
       }
       else
       {
           while(temp!=NULL&&temp->val==head->val)
           {
               temp=temp->next;
           }
           return deleteDuplicates(temp);
       }
       return head;
    }
};
