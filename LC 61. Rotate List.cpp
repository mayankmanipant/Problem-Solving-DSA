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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        if(!head || !head->next || k==0) return head;
        ListNode *temp=head;

        while(temp->next){
            len++;
            temp=temp->next;
        }
        temp->next=head;   // making list circular

        k=k%len;
        int step=len-k;
        
        temp=head;
        for(int i=1;i<step;i++){     // find the new tail(lastnode)
            temp=temp->next;       
        }

        ListNode *newhead=temp->next;
        temp->next=nullptr;      // breaking the circular loop

        return newhead;
    }
};
