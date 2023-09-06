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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        temp=head;
        int len=n/k, rem=n%k;
        vector<ListNode*>ans(k,NULL);
        int j=0;
        while(temp!=NULL){
            ListNode*dummy=new ListNode(0);
            ListNode*curr=dummy;
            for(int i=0;i<len;i++){
                curr->next=new ListNode(temp->val);
                temp=temp->next;
                curr=curr->next;
            }
            if(rem>0){
                curr->next=new ListNode(temp->val);
                temp=temp->next;
                curr=curr->next;
                rem--;
            }
            ans[j]=dummy->next;
            j++;
        }
        return ans;
    }
};
