/*链表题目。给定一个链表，交换每两个相邻节点，并返回其头部。
例如，给定 1->2->3->4，则返回的链表是 2->1->4->3。
不能修改链表中的值，只有节点本身是可以改变的。可以采用递归的做法，交换前两个，对后续的元素也进行swap*/
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
    ListNode* swapPairs(ListNode* head) {
      //递归做法，交换前两个，对后续的元素也进行swap
      if(!head||!head->next) return head;
      ListNode *cur=head->next;
      head->next=swapPairs(head->next->next);
      cur->next=head;
      return cur;
    }
};
