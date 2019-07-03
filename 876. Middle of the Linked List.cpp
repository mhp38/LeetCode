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
    ListNode* middleNode(ListNode* head) {
        ListNode* st=head;
        ListNode* md=head;

        while(st != NULL  && st->next != NULL){
            md=md->next;
            st=st->next->next;
        }
        return md;
    }
};
