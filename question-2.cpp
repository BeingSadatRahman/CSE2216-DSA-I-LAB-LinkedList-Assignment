#include <iostream>
using namespace std;
//here i am defining the node structure
struct Node{
    int data;
    Node*next;
};
int main(){
    int N;
    cin >> N;//taking number of elements
    Node*head=NULL;//initialized head as empty
    Node*temp=NULL;
    //I am Creating the linked list here
    for(int i=0;i<N;i++){
        int x;
        cin >> x;//taking input value 
    Node*newNode=new Node();//creating a new node here
    newNode->data=x;//assigning value to the node
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;//setting the first node as head
    }
    else{
        temp->next=newNode;//I am connecting previous node to new node here
    }
    temp=newNode;
    }
//Now I am gonna calculate count and sum
int count=0;
int sum=0;
Node*current=head;
while(current!=NULL){
    count++;//i am increasing the count for each node here
    sum+=current->data;//adding node value to the sum
    current=current->next;//here I am moving forward to the next node
}
//printing the final results here
cout <<"Count:"<<count<<endl;
cout<<"Sum:"<<sum<<endl;
return 0;

}