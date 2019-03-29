/*给定一个链表，将列表向右旋转k个位置，其中k是非负的。比如：
Input: 1->2->3->4->5->NULL, k = 2
Output: 4->5->1->2->3->NULL
Explanation:
rotate 1 steps to the right: 5->1->2->3->4->NULL
rotate 2 steps to the right: 4->5->1->2->3->NULL
解题思路：可以把k模上链表长度再翻转。然后如上面的例子，关键步骤是5链接到头指针，头指针指向4，再把3指向NULL。
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp=head,*cur=head;
        int len=1;
        if(head==NULL) return head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len++;
        }
        k%=len;
        temp->next=head;//最后一个结点的next指针指向head
        k=len-k;
        while(--k)
        {
            cur=cur->next;//循环结束后cur为新的尾结点
        }
        head=cur->next;//cur的下一个为新的头结点，把head指向它
        cur->next=NULL;//再另尾结点指向NULL
        return head;
    }
};
