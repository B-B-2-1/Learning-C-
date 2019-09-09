#include <iostream>
using namespace std;

int main()
{
    int i,size;
    cout<<"enter no of elements";
    cin>>size;
    int *array = new int[i];
    cout<<"Enter "<<size<<" elements seperated by spaces"<<endl;
    for(i = 0;i<size;i++)
    {
        cin>>array[i];
    }
    i = 0;
    while(i<size/2 + 2)
    {
        if(array[i]!=array[size-1-i])
        {
            cout<<"Not same reverse"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Array same reverse"<<endl;
    return 0;
}