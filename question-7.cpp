#include<iostream>
using namespace std;
struct Node{//defining the node structure
    int data;
    Node*next;
};
Node*mergelist(Node*a,Node*b){
    Node dummy;//I am using a dummy node to simplify merging
    Node*tail=&dummy;//here i am using tail to build the new list
    dummy.next=NULL;
while(a!=NULL&&b!=NULL){
 if(a->data <=b->data){
    tail->next=a;//linking smaller node from list a
    a=a->next;//moving pointer of list a
 }
 else{
    tail->next=b;//here i am linking smaller node from list b just like i have linked smaller node from list a
 b=b->next;//moving pointer of list b
 }
 tail=tail->next;//moving tail forward
}
 if(a!=NULL){
    tail->next=a;//attaching remain nodes of list a
 }
if(b!=NULL){
    tail->next=b;//attaching remain nodes of list b
 } 
return dummy.next;//returning the merged list  
}
void print(Node*head){
    if(head==NULL){
        cout<<("empty");//i am handling empty list case here
return ;
    }
Node*temp=head;//starting from head
while(temp!=NULL){
 cout<<temp->data<<" ";//printing node data
 temp=temp->next;//moving to next node
 }
}
int main(){
    int n;
   cin>>n;//taking the size of first list
Node*l1=NULL;
Node*t1=NULL;
for(int i=0;i<n;i++){
    int x;
  cin>>x;//taking input for list 1
Node*node=new Node();//i am creating a new node here
node->data=x;
node->next=NULL;
if(l1==NULL){
    l1=node;
    t1=node;
}
else{
 t1->next=node;//linking new node
 t1=node;//updating the tail here
  }
}
int m;
cin>>m;
Node*l2=NULL;
Node*t2=NULL;
for(int i=0;i<m;i++){
    int x;
  cin>>x;
  Node*node=new Node();//i am creating a new node here
node->data=x;
node->next=NULL;
if(l2==NULL){
    l2=node;
    t2=node;
}
else{
 t2->next=node;//linking new node
 t2=node;//updating the tail here
  }
}
cout<<"List 1: ";
print(l1);
cout<<endl;
cout<<"List 2: ";
print(l2);
cout<<endl;
Node*merged=mergelist(l1,l2);//here i am merging both the sorted lists
cout<<"Merged ";
print(merged);
return 0;

}
