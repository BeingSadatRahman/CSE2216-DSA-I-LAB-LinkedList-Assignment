#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
//here i am printing the Linked List
void printlist(Node*head){
    Node*temp=head;
while(temp!=NULL){//loop until the end of the list
    cout<<temp->data<<" ";//printing the current node value
temp=temp->next;//moving to the next node
}
 cout<<endl;

}
int main(){
 int N;
 cin>>N;
 Node*head=NULL;//head is initially empty
 Node*temp=NULL;//here i am using temp pointer for tracking the last node
 for(int i=0;i<N;i++){//using loop to create the list
    int x;
    cin>>x;
Node*newNode=new Node();//creating a new node here
newNode->data=x;//assigning value to the node
newNode->next=NULL;//here the next pointer is empty
if(head==NULL){
    head=newNode;
}
else{
    temp->next=newNode;//linking previous node to the new node
}
temp=newNode;//updating the last node pointer here
 }
 int key;
 cin>>key;
 cout<<"Before: ";
 printlist(head);//printing the list before deletion
 Node*current=head;//starting traversal
 Node*previous=NULL;//Tracking previous node
 bool found=false;
 while(current!=NULL){
    if(current->data==key){//if value matches
found=true;//marking as found
if(previous==NULL){
    head=current->next;//moving head forward
}
else{
  previous->next=current->next;//here i am bypassing the node
}
 delete current;
 break;//stopping the loop
  }
  previous=current;
  current=current->next;
 }
 if(!found){//if value not found
  cout<<"Not found"<<endl;
 }
 else{
    cout<<"After: ";
printlist(head);//i am printing the updated list here
 }
return 0;
}