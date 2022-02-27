
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans=nullptr;
        ListNode * tail=nullptr;
        ListNode * list1=l1;
        ListNode * list2=l2;
        int re=0;
        while(list1 || list2){
            int x= list1? list1->val:0;
            int y= list2? list2->val:0;
            if(tail){
                ListNode * tmp=new ListNode((x+y+re)%10);
                tail->next=tmp;
                tail=tmp;
            }else{
                ListNode * tmp=new ListNode((x+y+re)%10);
                ans=tmp;
                tail=tmp;
            }
            re=(x+y+re)/10;

            if(list1){
                list1=list1->next;
            }
            if(list2){
                list2=list2->next;
            }
        }
        if(re!=0){
            ListNode * tmp=new ListNode(re);
            tail->next=tmp;
            tail=tmp;
        }
        return ans;
    }
};