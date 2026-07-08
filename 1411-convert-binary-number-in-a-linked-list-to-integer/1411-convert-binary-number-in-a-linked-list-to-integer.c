/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {

    struct ListNode* pos =head;
    int sum =0;
    while(pos !=NULL){
        if(pos->val ==1){
            sum = sum<<1|1;
        }else{
           sum =  sum<<1|0;
        }
        pos = pos->next;
    }
    return sum;
}