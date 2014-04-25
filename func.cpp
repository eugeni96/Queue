#include "func.h"
#include <iostream>

using namespace std;

MyQueue::MyQueue():
    head(nullptr), tail(nullptr)
{

}

MyQueue::~MyQueue()
{
    delQueue();
}

void MyQueue::push ()
{
    int dt=0;
    cout<<"Enter data:"<<endl;
    cin>>dt;
    Node *p=nullptr;
    p=new Node;
    p->link=nullptr;
    if(!head)
    {
        tail=p;
        head=p;
    }
    else
    {
        tail->link=p;
        tail=p;
    }
    p->datum=dt;
    p=nullptr;
}


void MyQueue::pop()
{
    if (head)
    {
        Node *p=head;
        head=head->link;
        p->link=nullptr;
        p->datum=0;
        delete p;
        p=nullptr;
    }
}

void MyQueue::delQueue()
{
    while (head)
    {
        MyQueue::pop();
    }
}

void MyQueue::view()
{
    Node *p=head;
    while(p)
    {
        cout<<p->datum<<endl;
        p=p->link;
    }
    p=nullptr;
}

bool MyQueue::filled()
{
    return (head);
}
