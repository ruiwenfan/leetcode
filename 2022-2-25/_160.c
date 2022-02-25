#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(!headA || !headB){
        return NULL;
    }     
    struct ListNode* A=headA;
    struct ListNode* B=headB;                
    while(A!=B){
        A= A ? A->next : headB;
        B= B ? B->next : headA;
    }
    return A;
}