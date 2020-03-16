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

node* create_Tree(int* arr,int nodePos,int size)
{
    node* temp;

    if(nodePos<size)
    {
        temp = create_Node(arr[nodePos]);

        temp->left = create_Tree(arr,2*nodePos+1,size);
        temp->right = create_Tree(arr,2*nodePos+2,size);

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
    int arr[] = {0,1,2,3,4,5,6};
    node* root = create_Tree(arr,0,sizeof(arr)/sizeof(int));
    print_Tree(root);
    return 0;
}

/*
                                                     0
                                                    /\
                                                   1  2
                                            /\              /\
                                           3   4          5    6
                                          /\     /\     /\       /\
                                        7   8   9  10  11 12   13  14


*/

