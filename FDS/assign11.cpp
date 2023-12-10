'''
A double-ended queue (deque) is a linear list in which additions
and deletions may be made at either end. Obtain a data representation mapping
a deque into a onedimensional array. Write C++ program to simulate deque with functions
to add and delete elements from either end of the deque
'''

#include <iostream>
using namespace std;
int queue[10];int front=-1;int rear=-1;
int queuesize=10;
void display()
{
 cout<<"Status of Double Endded queue : ";
 for(int i=front;i<=rear;i++)
 {

 cout<<" "<<queue[i]<<"---->";
 }
}
int overflow()
{
 if(rear>=queuesize)
 {
 return 1;
 }
 else
 {
 return 0;
 }
}
int isEmpty()
{
 if(front==-1 || front>rear)
 {
 return 1;
 }
 else
 {
 return 0;
 }
}
void EnqueueF()
{
 int val1;
 cout<<"enter Value to insert in queue"<<endl;
 cin>>val1;
 int p=isEmpty();

 if (p==1)
 {

 front=front+1;
 rear=rear+1;
 queue[front]=val1;
 display();

 }
 else
 {
 int m=overflow();
 if(m==1)
 {
 cout<<"Doble Ended queue is overflow"<<endl;
 }
 else
 {
 for(int i=rear;i>=0;i--)
 {
 queue[i+1]=queue[i];
 }
 queue[front]=val1;
 rear=rear+1;
 display();

 }
 }
}
void EnqueueR()
{
 int val2;
 cout<<"enter Value to insert in queue"<<endl;
 cin>>val2;
 int p=isEmpty();

 if (p==1)
 {

 front=front+1;
 rear=rear+1;
 queue[rear]=val2;
 display();

 }
 else
 {
 int m=overflow();
 if(m==1)
 {
 cout<<"Double Ended queue is overflow"<<endl;
 }
 else
 {
 rear=rear+1;
 queue[rear]=val2;
 display();

 }
 }
}
void DequeueF()
{
 int s=isEmpty();
 if(s==1)
 {
 cout<<"***** Double Ended queue is empty ******"<<endl;
 }
 else
 {
 cout<<"value"<<" "<<queue[front]<<" "<<"Deleted successfully"<<endl;
 front=front+1;
 display();

 }
}
void DequeueR()
{
 int s=isEmpty();
 if(s==1)
 {
 cout<<"***** Double Ended queue is empty ******"<<endl;
 }
 else
 {
 cout<<"value"<<" "<<queue[rear]<<" "<<"Deleted successfully"<<endl;
 rear=rear-1;
 display();

 }
}
int main()
{


 int choice;

 char ch;
 do{
 cout<<"********* ENTER YOUR CHOICE *****************"<<endl;
 cout<<" 1.Enqueue from front end"<<endl;
 cout<<" 2.Enqueue from rear end"<<endl;
 cout<<" 3.Dequeue from front end"<<endl;
 cout<<" 4.Dequeue from Rear end"<<endl;


 cin>>choice;
 switch(choice)
 {
 case 1:

 EnqueueF();
 break;
 case 2: EnqueueR();
 break;
 case 3: DequeueF();
 break;
 case 4: DequeueR();

 }
 cout<<endl<<"do you want to continue? Yes press 'y' for NO press 'n'";
 cin>>ch;
 }while(ch=='y');


 return 0;
}