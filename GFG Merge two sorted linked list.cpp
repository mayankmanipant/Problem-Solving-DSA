class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        vector<int> arr;
        while(head1!=nullptr){
            arr.push_back(head1->data);
            head1=head1->next;
        }
        
        while(head2!=nullptr){
            arr.push_back(head2->data);
            head2=head2->next;
        }
        
        sort(arr.begin(),arr.end());
        
        Node* curr=new Node(-1);
        Node* ans=curr;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans->next=new Node(arr[i]);
            ans=ans->next;
        }
        return curr->next;
    }
};
