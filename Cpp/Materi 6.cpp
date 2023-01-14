#include <iostream>
using namespace std;
//nama dan nim = Muhammad Daffa Ridho_2022240051
struct Node{
int data;
Node* next;	
};
class queue{
struct Node*head,* tail;
public:
queue(){
head= tail=NULL;	
}
void enQueue();
void deQueue();
void displayQueuq();
void menu();
int elem;
int choice;	
};
void queue::enQueue() {
cout<<"enter your element to be inserted the queue:";
cin>>elem;
Node* pointer=new Node;
pointer -> data=elem;
pointer -> next=NULL;
if(head==NULL) {
head=pointer;	
}
else
tail -> next= pointer;
tail= pointer;
cout<<"element has been interted in the queue!"<<endl;	
}
void queue::deQueue(){
if(head==NULL){
cout<<"queue is empty!"<<endl;	
}
Node* temp=head;
head=head -> next;
delete temp;	
}
void queue::displayQueuq(){
Node* pointer1=head;
if(head==NULL) {
cout<<"queue is empty!"<<endl;	
}
else
cout<<"elements of your queue!"<<endl;
while (pointer1 !=NULL) {
cout<< pointer1-> data<<endl;
pointer1= pointer1-> next;	
}
cout<<"endl"<<endl;	
}
void queue::menu(){
while(1)	
{
cout<<"=================="<<"\n";
cout<<"1. queue"<<"\n";
cout<<"2. dequeue"<<"\n";
cout<<"3. displayqueue"<<"\n";
cout<<"4. exit"<<"\n";
cout<<"=================="<<"\n";
cout<<"\nEnter your choice:";
cin>>choice;
switch(choice)
{
	case 1:
	enQueue();
	break;
	case 2:
	deQueue();
	break;
	case 3:
	void displayQueue();
	break;
	case 4:
	break;
	default:
	cout<<"enter choice(1-4)";
	break;	
}
}
}
int main(){
queue frank;
frank.menu();	
}
