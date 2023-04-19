#include <string>
#include<iostream>

using namespace std;

struct node {
   int data ;
   node* next;

};
node* head =NULL;

void insert_Node(int value);
    void display();

    int dequeue();
int main(){
    insert_Node(3);
    insert_Node(4);
    insert_Node(5);
    insert_Node(545);
    insert_Node(63);
display();
}

void insert_Node(int value){

node* new_node ,*last ;
new_node =new node ;
new_node->data=value;
if(head ==NULL){
    head=new_node;
    new_node->next=NULL;
}

else{last=head;
while(last->next!=NULL){
    last =last->next;
}
last->next=new_node;
new_node->next=NULL;

}
}
void display(){
node* current_node;
if(head==NULL){

    cout<<"linked last is empty .";
}else {
current_node=head;
while(current_node!=NULL){

    cout<< current_node->data<< "  " ;
    current_node=current_node->next;
}

}



}    
int dequeue(){
if (front ==NULL){
    cout<<" queue is empty "<<endl;

    }
    else {

        node* ptr= front;
        front =front->next;
        delete(ptr);
    }



};



