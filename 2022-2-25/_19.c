struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int i=1;
    struct ListNode * right=head;
    struct ListNode * left=head;
    while(i<=n){
        right=right->next;
        i++;
    }
    if(!right){
        return head->next;
    }
    while(right->next){
        right=right->next;
        left=left->next;
    }
    left->next=left->next->next;
    return head;
}