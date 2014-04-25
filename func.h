#ifndef FUNC_H_
#define FUNC_H_

using namespace std;

class MyQueue
{
private:
    struct Node
    {
        int  datum;
        Node *link;
    };
    Node *head, *tail;
public:
    MyQueue();
    ~MyQueue();

    void push();
    void pop();
    void delQueue();
    void view();
    bool filled();
};




#endif // FUNC_H_
