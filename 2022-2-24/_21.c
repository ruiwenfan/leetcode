#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode * ans=NULL;
    struct ListNode * tail=NULL;
    while(list1 && list2){
        if(!ans){
            if(list1->val <= list2->val){
                tail=list1;
                list1=list1->next;
                tail->next=NULL;
                ans=tail;
            }else{
                tail=list2;
                list2=list2->next;
                tail->next=NULL;
                ans=tail;
            }
        }else{
            if(list1->val <= list2->val){
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
            }else{
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;     
            }
        }

    }
    if(list1){
        while(list1){
            if(!ans){
                tail=list1;
                list1=list1->next;
                tail->next=NULL;
                ans=tail;
            }else{
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
            }
        }
    }
    if(list2){
        while(list2){
            if(!ans){
                tail=list2;
                list2=list2->next;
                tail->next=NULL;
                ans=tail;
            }else{
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;
            }
        }
    }
    return ans;
}