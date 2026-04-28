#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
void print(Node*head){//here i am using function to print the linked list
   Node*temp=head;//starting traversal from head
while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;//moving to the next node
 }
 cout<<endl;
}
int main(){
    int n;
    cin>>n;
Node*head=NULL;
Node*tail=NULL;
for(int i=0;i<n;i++){
    int x; cin>>x;
    Node*node=new Node();//creating a new node here
    node->data=x;
node->next=NULL;
if(head==NULL){
    head=node;//here i am assigning first node as head
    tail=node;
 }
else{
    tail->next=node;//linking new node at the end
    tail=node;//updating the tail pointer here
 }
}
cout<<"Before: ";
print(head);
if(head==NULL or head->next==NULL){
    cout<<"After: ";
print(head);//handling edge case (0 or 1 node)
return 0;
}
Node*slow=head;
Node*fast=head;
while(fast->next and fast->next->next){
    slow=slow->next;//i am moving slow pointer one step
    fast=fast->next->next;//and moving fast pointer two steps
}
Node*prev=NULL;
Node*current=slow->next;
while(current!=NULL){
    Node*next=current->next;//storing next node
    current->next=prev;//reversing links
    prev=current;
    current=next;
}
slow->next=NULL;//splitting linked list into two halves here
Node*first=head;
Node*second=prev;
while(second!=NULL){
    Node*t1=first->next;
    Node*t2=second->next;
    first->next=second;//merging alternately
    second->next=t1;
    first=t1;
    second=t2;
}
cout<<"After: ";
print(head);
return 0;
}
