#include <iostream>
using namespace std;
// Here I am creating a node structure for storing station names
struct Node{
string data; // I store station name here
Node*next;//here I am pointing to the next station
};
int main(){
    int N;
    cin>>N;//I am taking number of stations
Node*head=NULL;//Initialized head as empty
Node*temp=NULL;
//I am Building the linkedlist
for(int i=0;i<N;i++){
string name;
cin>>name;//i am taking station name input
Node*newNode=new Node();//I am creating a new node here
newNode->data=name;
newNode->next=NULL;
if(head==NULL){
head=newNode;//if the list is empty i make first node as head
  }
else{
temp->next=newNode;//I am gonna link previous node to new node
 }
temp=newNode;//moving temp forward
  }
//Here I am printing the route
Node*current=head;
while(current!=NULL){
cout<<current->data<<"->";
current=current->next;//I move to the next node
  }
cout<<"END"<<endl;//here I am printing the ending
return 0;
}
