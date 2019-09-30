#include<iostream>
using namespace std;


//Defining a node struct
struct node{
    int val;
    node* next;
};

//Function to make linked list from input values
//Reference of the node as func parameter. so no return value
void make_linked_list(node* Head,int n)
{
    node* temp = Head;
    int k;
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        temp->val = k;
        if(i!=n-1)
            temp->next = new node;
        else
            temp->next = NULL;
        temp = temp->next;     
    }
}


//fuction to reverse linked list
/*

 0          1         2        3
back---->current--->front--->
 0          1         2        3
back<===>current    front--->
 0        1           2          3          4
    <===>back       current--->front----->
 0        1           2          3          4   
    <===>back<------current    front----->
 0        1          2           3          4   
             <------back       current--->front

*/
node* reverse_Linked_list(node* head)
{
    node *front,*current,*back;
    back = head;
    current = back->next;
    front = current->next;

    while(front!=NULL)
    {
        current->next = back;
        back = current;
        current = front;
        front = current->next;
    }
    current->next = back;
    head->next = NULL;
    return current;
}

//driver function
int main()
{
    int n;
    node* head = new node;
    cout<<"Enter number of nodes : ";
    cin>>n;
    cout<<"enter values :";
    make_linked_list(head,n);

    node* rev = reverse_Linked_list(head);

    for(node* temp = rev; temp!=NULL; temp = temp->next)
    {
        cout<<temp->val<<" ";
    }


    return  0;
}