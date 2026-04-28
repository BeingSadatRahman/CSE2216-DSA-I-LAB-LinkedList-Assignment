#include <iostream>
using namespace std;
struct Node{//here I am defining the node structure
    int data;
    Node*next;
};
int printlist(Node*head){//defining the function to print list
    Node*current=head;
    while(current!=NULL){//loop until the end of list
cout<< current->data<<" ";//here i am printing the data
current=current->next;//I move to the next node
    }
   cout<< endl;
   return 0;
}
int main(){
    int N;//declaring number of nodes
    cin>>N;//here i am taking the input
    Node*head=NULL;
    Node*temp=NULL;
for(int i=0;i<N;i++){//here i run loop N times
    int x;
    cin>>x;
Node*newNode=new Node();//creating a new node here
newNode->data=x;
newNode->next=NULL;
if(head==NULL){//if the list is empty
    head=newNode;//i set the first node
}
else{
    temp->next=newNode;//i am linking previous node here
}
temp=newNode;//updating temp
}
int value,pos;//i am declaring value and position here
cin>>value>>pos;//taking the input
cout<<"Before: ";
printlist(head);//i print the list
Node*newNode=new Node();//creating a new node 
newNode->data=value;//I am assigning value here
Node*current=head;
if(pos==1){//if inserting at beginning
 newNode->next=head;
 head=newNode;
}
else{
    for(int i=1;i<pos-1&&current!=NULL;i++){//here i am moving to the position
        current=current->next;//I traverse
    }
if(current!=NULL){//if a valid position
newNode->next=current->next;//i link forward
current->next=newNode;//i insert the node
}
}
cout<<"After: ";//here i am printing the label
printlist(head);//printing the updated list
return 0;
}