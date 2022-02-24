typedef int bool;
#define true 1
#define false 0
#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
bool hasCycle(struct ListNode *head) {
    if(head==NULL){
        return false;
    }
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    do
    {
        if(fast==NULL || fast->next ==NULL){
            return false;
        }
        fast=fast->next->next;
        slow=slow->next;
    }while(slow!=fast);
    return true;    
}