/*数组由链表中的几个块构成。比如题目中给的例子：
Input: 
head: 0->1->2->3
G = [0, 1, 3]
Output: 2
Explanation: 
0 and 1 are connected, so [0, 1] and [3] are the two connected components. 
也就是数组[0,1,3]是由链表中的[0,1]和[3]两个组件组成的。
我的解法见代码，竟然只打败了8.69%,在时间复杂度上很没有优势，主要原因是我直接在vetor中用迭代器查找，很耗时。有的题解用了set。待改进。*/
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
    int numComponents(ListNode* head, vector<int>& G) {
        int ans=0,temp=G.size();
        vector<int>::iterator iter;
        int judge=0;
        while(head!=NULL)
        {
            iter = find(G.begin(), G.end(), head->val);
            if(iter==G.end()) {judge=0;}
            else {if(judge==0) ans++;temp--;judge=1;}
            head=head->next;
            if(temp==0) break;
         }
        return ans;
    }
}; 
