/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    int i = 0;

    for(i=0; temp != NULL; i++){
        temp = temp->next;
    }
    
    i = i - n;

    // head노드를 지워야 하는 경우
    if(i==0) {
        head = head -> next;
    }

    // head 노드가 아닌 경우 
    else {
        temp = head;
        for(int j=0; j<i-1; j++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
    





    return head;
}