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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        int extra=0;
        ListNode* dummy= new ListNode(0);
        ListNode* l=dummy;

    while(l1 || l2)
    {
        int sm=extra;
        if(l1){
            sm+=l1->val;
            l1 =l1->next;
        }
         if(l2){
            sm+=l2->val;
            l2 =l2->next;
        }

        if(sm>9){
            extra=1;
            sm=sm%10;
        }

        else{
            extra=0;
        }

        l->next=new ListNode(sm);
        l=l->next;

    }

    if(extra){
        l->next=new ListNode(extra);
    }

    return dummy->next;

    }
};
