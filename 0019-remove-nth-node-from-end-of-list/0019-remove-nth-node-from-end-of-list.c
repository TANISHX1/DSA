/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if (head == NULL) {
        return head;
    }
    struct ListNode* buffer[32];
    int counter = 0;
    for (int i = 0; head != NULL; i++) {
        buffer[i] = head;
        counter++;
        head = head->next;
    }
    if (counter - n - 1 >=0) {
        buffer[counter - n - 1]->next = buffer[counter - n]->next;
    } else{
        buffer[0] = buffer[0]->next;
    }
        return buffer[0];
}