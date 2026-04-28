#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
int main(){
    int n;
    cin>>n;
Node*head=NULL;//initially the list is empty here
 for(int i=0;i<n;i++){//using loop to create the list
    int x;
    cin>>x ;
    Node* newNode=new Node();//creating a new node
    newNode->data=x;//assigning the value
    newNode->next=NULL;
    if(head==NULL){
    head=newNode;
    } 
else {
Node* temp=head;
 while(temp->next!=NULL){
    temp=temp->next;//moving forward
 }
 temp->next=newNode;
    }
}
int key;
 cin>>key;
 Node*temp=head;//starting the traversal
 int pos=1;
 bool found=false;//checking here if found
 while(temp!=NULL){//traversing the list
  if(temp->data==key){
 if(found==false){
    cout<<"found at position(s): ";
 }
 cout<<pos<<" ";
 found=true;//marking as found

  }
temp=temp->next;//here i am moving to next node
pos=pos+1;//increasing the position
}
if(found==false){//if not found
 cout<<"Not found";
}
return 0;
}