/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA,
                                     struct ListNode* headB) {
    if (headA== NULL || headB == NULL) {
        return NULL;
    }
    struct ListNode* pos_a = headA;
    struct ListNode* pos_b = headB;
    while (true) {
        if (pos_a == pos_b) {
            return pos_a;
        }
        if (pos_a->next == NULL && pos_b->next == NULL) {
            return NULL;
        }
        if (pos_a->next == NULL) {
            pos_a = headB;
        } else {
            pos_a = pos_a->next;
        }
        if (pos_b->next == NULL) {
            pos_b = headA;
        } else {
            pos_b = pos_b->next;
        }
    }
    return NULL;
}