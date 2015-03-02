// http://lintcode.com/en/problem/rotate-list/


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
    /**
     * @param head: the list
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode *rotateRight(ListNode *head, int k) {
        // write your code here
        ListNode *p=head;
        if(head==NULL || head->next==NULL) return head;
        int len=1;
        while(p->next!=NULL)
        {
            len++;
            p=p->next;
        }
        p->next=head;
        k%=len;
        int step=len-k;
        while(step)
        {
            p=p->next;
            step--;
        }
        head=p->next;
        p->next=NULL;
        return head;
    }
};
