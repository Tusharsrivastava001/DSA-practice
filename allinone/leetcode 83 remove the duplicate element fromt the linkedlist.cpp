class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*a=head;
        ListNode*b=head->next;
        while(b!=NULL){
            while(b!=NULL && a->val==b->val){
                b=b->next;
            }
            a->next=b; // to remove the middle elemnt like 10 10 10 20 so to  10 20 jump
            a=b;
            if(b!=NULL){
                b=b->next;
                }
        }
        return head;
    }
};