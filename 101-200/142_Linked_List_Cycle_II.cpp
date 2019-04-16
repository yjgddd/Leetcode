/*找链表中的环入口。先用快慢指针判断链表中是否有环，那么两者相遇的时候，再让一个指针从头结点开始走，那么此时再相遇的结点就是入口结点。
和剑指offer找链表环入口一样。至于为什么相遇的结点就是入口结点，可以参考牛客网讨论区别人的解释：
https://www.nowcoder.com/questionTerminal/253d2c59ec3e4bc68da16833f79a38e4
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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL) return NULL;
        ListNode* p1=head,*p2=head;
        while(p2->next!=NULL&&p2->next->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next->next;
            if(p1==p2)
            {
                 p2=head;
                 while(p1!=p2)
                 {
                    p1=p1->next;
                    p2=p2->next;
                 }
                return p2;
            }
        }
        return NULL;
    }
};
