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
    ListNode* reverseList(ListNode* head) {
        ListNode *prv=NULL;
        ListNode *next=NULL;

        while(head){
            next=head->next;
            head->next=prv;
            prv=head;
            head=next;
        }
        return prv;
    }
};
