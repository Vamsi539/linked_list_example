 #include <bits/stdc++.h> 
using namespace std; 
   
struct Node { 
    int data; 
    Node* next; 
}; 
  

void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = (Node*)malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = (*head_ref);
    (*head_ref) = new_node; 
} 
int sum(Node* head_1) 
{ 
    int s = 0; 
    Node* ptr = head_1; 
    while (ptr != NULL) 
    { 
        s += ptr->data;
        ptr = ptr->next; 
    } 
    return s; 
}  
int main() 
{ 
    int h,k;
    Node* head1 = NULL; 
    cout<<"enter no.of numbers";
    cin>>h;
    for(k=0;k<h;k++)
    {
    cin>>k;
    push(&head1, k);
    }
    cout << sum(head1) ;;
    cout << endl; 
    return 0; 
} 

