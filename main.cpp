#include <iostream>
#include "func.h"

using namespace std;
using namespace evgeni;


void control()
{

    cout<<"Instruction"<<endl
        <<"enter 1 to add element"<<endl
        <<"enter 2 to delete element"<<endl
        <<"enter 3 to delete Quene"<<endl
        <<"enter 4 to view Quene"<<endl
        <<"enter 5 to check filled Quene"<<endl;

    MyQueue library;
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
