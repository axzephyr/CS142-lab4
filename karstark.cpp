#include<iostream>
#include "stack.cpp"
using namespace std;


class queue
{
public:
    Stack a,b;


    void dequue()
    {
       a.pop();
    }


    void enquue(int data)
    {
        while(a.emptyornot()==0)
        {
            int w=a.top->data;
            b.push(w);
            a.pop();
        }

        a.push(data);

        while(b.emptyornot()==0)
        {
            int w=b.top->data;
            a.push(w);
            b.pop();
        }
    }


    void display()
    {
        a.disp();
    }
};


int main()
{
    queue q1;
    q1.enquue(20);
    q1.enquue(4);
    q1.enquue(2);
    q1.enquue(1);
    q1.enquue(76);
    q1.display();
    return 0;
}
