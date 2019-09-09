#include <iostream>
using namespace std;
/*
Splitting array in half
*/

int main()
{
    int size,i;
    cout<<"Enter array Size"<<endl;
    cin>>size;
    int* p = new int[size];
    cout<<"Enter elements seperated by space"<<endl;
    for(i = 0;i<size;i++)
    {
        cin>>p[i];
    }
    int*arr1 = new int[size/2];
    int *arr2 = new int[size - size/2];
    for(i = 0;i<size/2;i++)
    {
        arr1[i] = p[i];
    }
    for(;i<size;i++)
    {
        arr2[i-size/2] = p[i] ;
    }

    for(i = 0;i<size/2;i++)
    {
        cout<<arr1[i]<<", ";
    }
    cout<<endl;
     for(i = 0;i<(size-size/2);i++)
    {
        cout<<arr2[i]<<", ";
    }
    cout<<endl;
}