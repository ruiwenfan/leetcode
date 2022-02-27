#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *ans=nullptr;
        while(head)
        {
            ListNode *tmp=head->next;
            head->next=ans;
            ans=head;
            head=tmp;
        }
        return ans;  
    }
};