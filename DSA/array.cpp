#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=nullptr;
    }
    Node(int v){
        data=v;
        next=nullptr;
    }
};
class linkedList{
public:
Node* head;
linkedList(){
    head=nullptr;
}
void insertAtEnd(int data){
    Node* nn=new Node(data);
if(head==nullptr){
 head=nn;
 return;
}
else{
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nn;
}
}
void display(){
    Node* t2=head;
    while(t2!=NULL){
        cout<<t2->data<<endl;
        t2=t2->next;
    }
} 
void removeDuplicate()
{
 Node* t1=head;
 Node* t2=head->next;
 while(t2!=nullptr){
    if(t1->data!=t2->data){
    t1->next=t2;
    t1=t2;
    t2=t2->next;
    }
    else{
        t2=t2->next;
    }
    t1->next=t2;
 }  
}
};

int main(){
 linkedList l;
 l.insertAtEnd(1);
 l.insertAtEnd(1);
 l.insertAtEnd(1);
 l.insertAtEnd(1);
 l.insertAtEnd(1);
 cout<<"Before removing :"<<"\n";
 l.display();
 l.removeDuplicate();
 cout<<"After removing :"<<"\n";
l.display();
}