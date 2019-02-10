#include<iostream>
#include "class1.cpp"
using namespace std;
//create a stack
class Stack
{
public:
    Node *top;
    linkedlist a1;
    Stack()
    {
        top = a1.head;
    }

//the function for create a new element
    void push(int data)
    {
        if(top != NULL)
        {
            a1.insertat(1,data);
            top=a1.head;
        }
        else
        {
            a1.insert(data);
        }
    }

//the function to delete elements
    void pop()
    {
        a1.delet();
        top=a1.head;
    }

//function to display  the elements
    void disp()
    {
        a1.display();
    }

//function to check for empty stacks
    bool emptyornot()
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

//function to check size
    int sizedisp()
    {
        return a1.counter();
    }
};


int main()
{
    Stack admissions;
    int n;
    cout<<" ask the user for the number of the elements in the stack "<<endl;
    cin>>n;
    int data;
    cout<<" Enter the elements in the stack "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        admissions.push(data);
    }
    admissions.disp();
    admissions.pop();
    admissions.disp();
    if(admissions.emptyornot()==1)
    {
        cout<<" The stack is empty "<<endl;
    }
    else
    {
        cout<<" The stack is not empty "<<endl;
    }
    admissions.sizedisp();
    return 0;
}
