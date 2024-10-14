/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;

    struct ListNode* dummyhead = malloc(sizeof(struct ListNode));
    struct ListNode* current = dummyhead;

    while(1) {
        int val1 = l1 != NULL ? l1->val : 0;
        int val2 = l2 != NULL ? l2->val : 0;

        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum % 10;

        struct ListNode* temp = malloc(sizeof(struct ListNode));
        temp -> val = sum;
        temp -> next = NULL;

        current->next = temp;
        current = temp;

        if(l1 != NULL) l1 = l1->next;
        if(l2 != NULL) l2 = l2->next;

        if((l1 == NULL) && (l2 == NULL)) {
            if(carry != 0) {
                struct ListNode* temp = malloc(sizeof(struct ListNode));
                temp -> val = carry;
                temp -> next = NULL;

                current->next = temp;
            }
            break;
        }
    }



    return dummyhead->next;
}