#include <iostream>
using namespace std;

int main()
{
    int size,i,temp;
    cout<<"Enter size : ";
    cin>>size;
    int* arr = new int[size];
    cout<<"Enter elements: ";
    for(i = 0;i<size;i++)
    cin>>arr[i];

    temp = arr[size-1];
    for(i = size;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    cout<<"Shifted array : [";
    for(i = 0;i<size-1;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[i]<<"]"<<endl;
}