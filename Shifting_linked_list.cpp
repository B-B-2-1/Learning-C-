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

node* shift_Right(node* head,int pos)
{
    node* temp = head;
    int count = 0;
    while(temp->next!= NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->next= head;
    temp = head;
    count = count-pos-1;
    while(count>=0)
    {
        temp = temp->next;
        count--;
    }
    head = temp->next;
    temp->next = NULL;

    return head;
    
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

    node* rev = shift_Right(head,4);

    for(node* temp = rev; temp!=NULL; temp = temp->next)
    {
        cout<<temp->val<<" ";
    }


    return  0;
}