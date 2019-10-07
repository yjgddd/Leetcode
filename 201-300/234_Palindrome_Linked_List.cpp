//判断一个链表是不是回文链表，可以把链表中的结点存到vector中来做
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        vector <int> temp;
        while(head!=NULL)
        {
            temp.push_back(head->val);
            head=head->next;
        }
        int i=0,j=temp.size()-1;
        while(i<j)
        {
            if(temp[i]!=temp[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
