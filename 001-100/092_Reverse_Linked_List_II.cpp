/*翻转链表中第m到第n个结点，1<=m<=n<=链表长度，由于链表的头结点也可能会改变，因此可以建立一个dummy结点，dummy->next=head,即使头结点改变，也可以获
得新链表的头结点。先找到要开始变换的结点的前一个结点pre，然后cur指向当前进行操作的结点，cur的初始值即第m个结点，cur=pre->next,temp指向cur的下一个结
点，对第m个到第n个结点进行如下操作，temp是cur的下一个结点，即temp=cur->next,当前结点cur指向下一个结点的下一个结点，再把temp插入pre和cur之间，temp->
next=pre->next;pre->next=temp;不断循环即可*/
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(0),*pre,*cur,*temp;
        dummy->next=head;
        pre=dummy;
        n-=m;
        while(--m)
        pre=pre->next;//开始变换的结点的前一个结点pre
        cur=pre->next;//cur指向当前进行操作的结点
        while(n--)
        {
            temp=cur->next;//temp指向cur的下一个结点
            cur->next=temp->next;//cur指向下一个结点的下一个结点
            temp->next=pre->next;//cur的原来下一个结点现在是pre的后一个结点,这里不能写cur
            pre->next=temp;//cur的原前一个结点指向原后一个结点，实现翻转
        }
        return dummy->next;
        
    }
};
