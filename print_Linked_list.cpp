struct Node{
  int data;
  struct Node* next;
   Node(int x){
    data=x;
    next=nullptr;
   }
};
class Solution{
    public:
    void printList(Node *head){
        Node* temp=head;
        while(temp!=NULL){
          cout<<temp->data<<" ":
            temp=temp->next;
        }
    }
};
           
