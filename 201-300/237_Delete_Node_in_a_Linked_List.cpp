/*删除链表中指定位置元素，只给了指向该元素的指针，不好直接删除，可以用后面的依次覆盖前面的元素*/
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
    void deleteNode(ListNode* node) {
        while(node->next->next!=NULL)
        {
         node->val=node->next->val;
         node=node->next;
        }
        node->val=node->next->val;
        node->next=NULL;
    }
};
