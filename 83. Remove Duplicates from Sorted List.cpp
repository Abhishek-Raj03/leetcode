/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      
        set<int> s;
        set<int>:: iterator it;
         ListNode* temp=NULL;
         ListNode* tail=NULL;
        
        while(head!=NULL){
            s.insert(head->val);
            head=head->next;
        }
        for(it=s.begin();it!=s.end();it++){
           ListNode* newnode=new ListNode(*it);
            if(temp==NULL){
                temp=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        return temp;
    }
};
