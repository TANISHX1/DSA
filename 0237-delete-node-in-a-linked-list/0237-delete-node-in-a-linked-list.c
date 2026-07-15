/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    if (node ==NULL){
        return ;
    }
    struct ListNode* pos ;
    while (node->next !=NULL){
        node->val = node->next->val;
        pos = node;
        node = node->next;
    }
    pos->next = NULL;
}