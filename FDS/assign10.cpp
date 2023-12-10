/*
Q.) Pizza parlor accepting maximum M orders. Orders are served in first come first served
basis. Order once placed cannot be cancelled. Write C++ program to simulate the system
using circular queue using array
*/

#include <iostream>
using namespace std;
int size=6;
int order_id;
int queue1[6];
int front=-1,rear=-1;
void display()
{
 cout<<"status of queue"<<endl;
 for(int i=front;i<=rear;i++)
 {
 cout<<queue1[i]<<"->";
 }
 cout<<endl;
}
int empty()
{
 if(front==-1)
 {return 1;
 }
 else
 {
 return 0;
 }
}
void dequeue()
{
 int s=empty();
 if(s==1)
 {
 cout<<"queue is underflow"<<endl;
 }
 else
 {
 if(front==size-1)
 {
 if(rear==size-1)
 {
 cout<<"order id "<<queue1[front]<<"served successfully"<<endl;

 front=-1;
 rear=-1;
 display();
 }
 else
 {
 cout<<"order id "<<queue1[front]<<"served successfully"<<endl;
 front=0;
 display();
 }
 }
 else if(front==rear)
 {
 cout<<"order id "<<queue1[front]<<"served successfully"<<endl;
 front=-1;
 rear=-1;
 display();
 }
 else
 {
 cout<<"order id "<<queue1[front]<<"served successfully"<<endl;
 front=front+1;
 display();
 }
 }

}
int overflow()
{
 if((rear+1)%size==front)
 {
 return 0;
 }
 else
 {
 return 1;
 }
}
void enqueue()
{
 cout<<"enter order id"<<endl;
 cin>>order_id;
 int p=overflow();
 if(p==0)
 {
 cout<<"queue overflow"<<endl;
 }
 else
 {
 if(front==-1 && rear==-1)
 {
 front=front+1;
 rear=rear+1;
 queue1[rear]=order_id;
 cout<<"order placed successfully"<<endl;
 display();
 }
 else if(rear==size-1)
 {
 rear=0;
 queue1[rear]=order_id;
 cout<<"order placed successfully"<<endl;
 display();
 }
 else
 {
 rear=rear+1;
 queue1[rear]=order_id;
 cout<<"order placed successfully"<<endl;
 display();
 }
 }
}
int main()
{


 cout<<"************** Wlcome to FDS Pizza Parlor******************"<<endl;
 char ch;
 int choice;
 do{
 cout<<"enter your choice 1.place order 2.serve order"<<endl;
 cin>>choice;

 switch(choice)
 {
 case 1:enqueue();
 break;
 case 2:
 dequeue();
 break;
 default:cout<<"wrong choice try again"<<endl;


 }
 cout<<"do you want to continue press y for yes"<<endl;
 cin>>ch;
 }while(ch=='y');



 return 0;
}
