#include <iostream>
using namespace std;
struct Node{//here i am defining the node structure
int data;
Node*next;
};
     void printList(Node* head){  //making function to print the list
Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";//printing current node data
temp=temp->next;// moving to the next node
  }
cout<<endl;
}
   int main(){  
    int N;
   cin>>N;
Node*head=NULL;
Node*temp=NULL;
for(int i=0;i<N;i++){
int x;
cin>>x; 
    Node* newNode=new Node();// creating new node here
    newNode->data=x;
  newNode->next=NULL;

if(head==NULL){
head=newNode;//setting first node as head
  }
else{
temp->next=newNode;//linking previous node
  }
temp=newNode;//moving temp forward
}
cout<<"Original: ";
printList(head);
 Node*previous=NULL;
   Node*current=head;
    Node*next=NULL;
while(current!=NULL){
  next=current->next;
current->next=previous;
previous=current;//moving previous forward here
current=next;//moving current forward
    }
head=previous;    // updating the head here
cout<<"Reversed: ";
printList(head);
 return 0;
}