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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        int lnA = 1, lnB = 1;

        ListNode* HA = headA;
        ListNode* HB = headB;

        while (HA != nullptr) {
            lnA++;
            HA = HA->next;
        }

        while (HB != nullptr) {
            lnB++;
            HB = HB->next;
        }

        if (HA != HB)
            return NULL;

        HA = headA, HB = headB;

        if (lnA > lnB) {
            for (int i = 0; i < lnA - lnB; i++) {
                HA = HA->next;
            }

        } else {
            for (int i = 0; i < lnB - lnA; i++) {
                HB = HB->next;
            }
        }

        while (HA != HB) {
            HA = HA->next;
            HB = HB->next;
        }

        return HA;
    }
};
