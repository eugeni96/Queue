#include <iostream>
#include "func.h"
#include "users_func.h"


using namespace std;
using namespace evgeni;

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
    int dt;
    dt=enterData();
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
    cout<<"Quene:"<<endl;
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
