

#include<iostream>
using namespace std;

class Node
{

public:
     //data
    int data;
    //pointer to the next node
    Node * next;
    //constructor to make the pointer null
    Node()
    {
    next=NULL;
    }
};

class linkedlist
{
    public:
   //head + circles linked  to each other inside
   //head->circle type pointer
   Node * head;
   Node * tail;
   //construct
   linkedlist()
   {
       head=NULL;
       tail=NULL;
   }
   //circles linked to each other
   //insert
   void insert(int value)
   {
       //if first node is added
       Node * temp=new Node;
       temp->data=value;
       //1st node only
       if(head==NULL)
       {
            head=temp;
       }
       //2nd node only
       else
       {

            tail->next=temp;
       }
       tail=temp;

   }
   //delete
   void delet()
   {
       //store the tail in temp
       Node * temp=tail;
       //before tail has to point to the NULL
       Node * current=head;
       while(current->next != tail)
       {
           current = current->next;
       }
       current->next= NULL;
       //update tail
       tail=current;
       delete temp;
   }
   //display
   void display()
   {
       Node*current=head;
       while(current != NULL)
       {
           cout<<current->data<<" -> ";
           current = current->next;
       }
       cout<<" NULL "<<endl;

   }
    //insert at
     void InsertAt(int pos, int val){
        //create a new node
        Node*temp = new Node;
        temp->data = val;
        if(pos==1){
            head = temp;
            tail = temp;

        }

        else{
        //counter should be at last element
              Node* current = head;
              int i=1;
            while(i<pos-1){
                    i++;
                current = current->next;
            }
            temp->next = current->next;
            current->next=temp;
        }
    }
    int counter()
    {
        int i=1;
        Node * current=head;
        while(current->next != NULL)
        {
            i++;
            current=current->next;
        }
        return i;
    }

};

/*int main()
{
    linkedlist l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.InsertAt(4,1);
    l1.display();
    l1.delet();
    l1.display();
    l1.counter();

    return 0;
}
*/
