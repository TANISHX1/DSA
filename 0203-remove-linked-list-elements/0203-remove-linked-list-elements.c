/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head !=NULL&&head->val ==val ){
        head = head->next;
    }
    if (head == NULL) {
        return head;
    }

    struct ListNode* pos = head;
    struct ListNode* temp = pos;
    pos  = pos->next;
    while (pos != NULL) {
        if (pos->val == val) {
            temp->next = pos->next;
            pos = pos->next;
            continue;
        }
        temp = pos;
        pos = pos->next;
    }
    return head;
}