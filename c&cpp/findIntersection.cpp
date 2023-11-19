class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node *dummy = new Node(0);
        Node *newList = dummy;
        while(head1 != NULL && head2!=NULL){
            if(head1->data == head2->data){
                newList->next = new Node(head1->data);
                newList = newList->next;
                head1 = head1->next;
                head2 = head2->next;
            }
            else if(head1->data < head2->data){
                head1 = head1->next;
            }
            else{
                head2 = head2->next;
            }
        }
        return dummy->next;
    }
};
