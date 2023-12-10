/*
Q.) Queues are frequently used in computer programming, and a typical example is the creation of
a job queue by an operating system. If the operating system does not use priorities, then the
jobs are processed in the order they enter the system. Write C++ program for simulating job
queue. Write functions to add job and delete job from queue.
*/

#include<iostream>
using namespace std;

int queue[10];
int front=-1;
int rear=-1;
int queuesize=10;

void display()
{
    cout<<"Status of job "<<"\n";
    for(int i=front;i<=rear;i++)
    {
        cout<<queue[i]<<"---->";
    }
}

int overflow()
{
    if(rear>=(queuesize-1))
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

void Enqueue()
{
 int job_id;
 cout<<"enter job_id"<<endl;
 cin>>job_id;
 int p=isEmpty();

 if (p==1)
 {

 front=front+1;
 rear=rear+1;
 queue[rear]=job_id;
 display();

 }
 else
 {
 int m=overflow();
 if(m==1)
 {
 cout<<"job_queue is overflow"<<endl;
 }
 else
 {
 rear=rear+1;
 queue[rear]=job_id;
 display();

 }
 }
}

void Dequeue()
{
 int s=isEmpty();
 if(s==1)
 {
 cout<<"***** job_queue is empty ******"<<endl;
 }
 else
 {
 cout<<"job_id"<<" "<<queue[front]<<" "<<"completed successfully"<<endl;
 front=front+1;
 display();

 }
}
int main()
{


 int choice;

 char ch;
 do{
 cout<<"********* ENTER YOUR CHOICE *****************"<<endl;
 cout<<" 1.Enqueue"<<endl;
 cout<<" 2.Dnqueue"<<endl;
 cin>>choice;
 switch(choice)
 {
 case 1:

 Enqueue();
 break;
 case 2: Dequeue();
 break;
 default: cout<<"Incorrect Choice ----- Try Again"<<endl;
 }
 cout<<endl<<"do you want to continue? Yes press 'y' for NO press 'n'";
 cin>>ch;
 }while(ch=='y');


 return 0;
}
