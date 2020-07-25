]#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int n) 
{
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = n;
   newnode->next = top;
   top = newnode;
}
void pop() 
{
   if(top==NULL)
   cout<<"Stack_Underflow"<<endl;
   else 
   {
      cout<< top->data <<endl;
       cout<<"popped ";
      top = top->next;
   }
}
void display() 
{
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) 
      {
         cout<< ptr->data <<"-->";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, n;
   do {
   cout<<"1.Push"<<endl;
   cout<<"2.Pop"<<endl;
   cout<<"3.Display"<<endl;
   cout<<"4.Exit"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value"<<endl;
            cin>>n;
            push(n);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
