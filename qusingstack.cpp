#include<iostream>
#include "stack.cpp"
using namespace std;

//create a queue
class queue
{
public:
    //create two stacks, one will act as a queue(a), other will temporarily store data(b)
    Stack a,b;

    //the function to delete from the queue
    void dequue()
    {
       a.pop();
    }


    void enquue(int data)
    {
        //as long as a is not empty, remove the elements of a to b, when you want to add new elements to a
        while(a.emptyornot()==0)
        {
            int w=a.top->data;
            b.push(w);
            a.pop();
        }
        //add the element you want to add to the queue
        a.push(data);
        //now push back the data from b to a
        while(b.emptyornot()==0)
        {
            int w=b.top->data;
            a.push(w);
            b.pop();
        }
    }

    //the function to display the elements
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
