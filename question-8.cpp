#include<iostream>
using namespace std;
struct Node{//defining the node structure
    int data;
    Node*next;
};
int main(){
    int n;
    cin>>n;
Node*head=NULL;
Node*tail=NULL;
for(int i=0;i<n;i++){
    int x;cin>>x;//taking input value
    Node*node=new Node();//creating a new node here
    node->data=x;
    node->next=NULL;
if(head==NULL){
    head=node;//assigning first node as head
    tail=node;
}
else{
    tail->next=node;//here i am linking new node at the end
    tail=node;//updating the tail
  }
}
int k;
cin>>k;
Node*fast=head;
Node*slow=head;
for(int i=0;i<k;i++){
    if(fast==NULL){
        cout<<"invalid";//handling the invalid k here
    return 0;
    }
    fast=fast->next;//moving fast pointer k steps ahead
 }
 while(fast!=NULL){
    fast=fast->next;//moving fast pointer
    slow=slow->next;//moving slow pointer together
 }
 cout<<"Kth from end: "<<slow->data;//printing kth node from end
}
