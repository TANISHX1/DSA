/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head) {
        return head;
        }
    struct ListNode* pos = head;
    struct ListNode* temp = pos;
    pos = pos->next;
    while (pos != NULL) {
        if (temp->val == pos->val) {
            temp->next = pos->next;
            }
        else {
            temp = pos;
            }
        pos = pos->next;
        }
    return head;
    }