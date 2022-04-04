class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        int extra=0;
        while(extra||l1||l2){
            int sum=extra+(l1?l1->val:0)+(l2?l2->val:0);
            extra=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
           l1= l1?l1->next:l1;
           l2= l2?l2->next:l2;
        }
        return head->next;
    }
};
