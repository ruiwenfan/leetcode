typedef int bool;
#define true 1
#define false 0
#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode *detectCycle(struct ListNode *head) {
    if(head==NULL){
        return NULL;
    }
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    do
    {
        if(fast==NULL || fast->next ==NULL){
            return NULL;
        }
        fast=fast->next->next;
        slow=slow->next;
    }while (fast!=slow);
    struct ListNode *tmp=head;
    while(slow!=tmp){
        slow=slow->next;
        tmp=tmp->next;
    }
    return slow; 
}