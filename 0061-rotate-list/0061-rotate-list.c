/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || k == 0) {
        return head;
    }
    int n = 1;
    struct ListNode* tail = head;

    while (tail->next != NULL) {
        n++;
        tail = tail->next;
    }

    k = k % n;
    if (k == 0) {
        return head;
    }

    tail->next = head;
    struct ListNode* pos = head;
    for (int i = 0; i < n-k-1; i++) {
        pos = pos->next;
    }

    head = pos->next;
    pos->next = NULL;
    return head;
}