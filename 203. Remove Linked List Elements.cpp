class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //ListNode* temp = head;
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        ListNode* temp = head;
        while(temp!=NULL && temp->next!=NULL){
           
             if(temp->next->val==val){
                temp->next=temp->next->next;
            }
           else temp=temp->next;
        }
        return head;
    }
};
