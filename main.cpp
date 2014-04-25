#include <iostream>
#include "func.h"

using namespace std;


void control()
{
    MyQueue library;
    int dt;
    int enter=1;
    while(enter!=0)
    {
        if (enter==1)
        {
            library.push();
        }
        if (enter==2)
        {
            library.pop();
        }
        if (enter==3)
        {
            library.delQueue();
        }
        if (enter==4)
        {
            library.view();
        }
        if (enter==5)
        {
            if(library.filled())
            {
                cout<<"true"<<endl;
            }
            else
            {
                cout<<"false"<<endl;
            }
        }
        cout<<"Enter action:"<<endl;
        cin>>enter;
    }
}

int main()
{
    control();
    return 0;
}
