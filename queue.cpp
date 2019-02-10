#include<iostream>
#include "class1.cpp"
using namespace std;

class quue
{
    public:
    Node * top;
    Node * end;
    linkedlist l1;
    quue()
    {
        top=NULL;
        end=NULL;
    }
    
    
    void enquue(int value)
    {
        l1.insert(value);
        end=l1.head;
    }
    
    
    void dequue()
    {
        l1.delet();
        top=l1.tail;
    }
    
    
    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
    int size()
    {
        int i=1;
        i=l1.counter();
        return i;
    }


    void topdisplay()
    {
        cout<<top->data<<endl;
    }
    
    
    void display()
    {
        l1.display();
    }
};

int main()
{
    quue q1;
    q1.enquue(1);
    q1.enquue(2);
    q1.enquue(3);
    q1.enquue(4);
    q1.enquue(5);
    q1.enquue(54);
    q1.dequue();
    q1.topdisplay();
    if(q1.isEmpty()==0)
    {
        cout<<" the queue is not empty "<<endl;
    }
    else
    {
        cout<<" the queue is empty "<<endl;
    }
    cout<<" There are "<<q1.size()<<" elements in the queue. "<<endl;
    q1.display();
    return 0;
}
