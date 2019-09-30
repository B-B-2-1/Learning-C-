#include<iostream>
using namespace std;

struct node{

    int val;
    node* left;
    node* right;
};

node* create_Node(int val){

    node* newnode = new node;
    newnode->val = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

node* create_Tree(int* arr,int i,int n)
{
    node* temp;

    if(i<n)
    {
        temp = create_Node(arr[i]);

        temp->left = create_Tree(arr,2*i+1,n);
        temp->right = create_Tree(arr,2*i+2,n);

        return temp;

    }
    return NULL;
}

void print_Tree(node* root)
{
    if(root!=NULL)
    {
        //pre-order printing
        //cout<<root->val<<" ";
        print_Tree(root->left); 
        //In-order printing
        //cout<<root->val<<" ";
        print_Tree(root->right);
        //Post-order printing
        cout<<root->val<<" ";
    }
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    node* root = create_Tree(arr,0,6);
    print_Tree(root);
    return 0;
}