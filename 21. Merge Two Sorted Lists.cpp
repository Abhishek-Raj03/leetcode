class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        //vector<int> v2;
        ListNode* temp1=list1;
         ListNode* temp2=list2;
        while(temp1!=NULL){
            v.push_back(temp1->val);
            temp1=temp1->next;
        }
        
         while(temp2!=NULL){
            v.push_back(temp2->val);
            temp2=temp2->next;
        }
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++){
            ListNode* newnode=new ListNode(v[i]);
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        return head;
    }
};
