#include <iostream>
using namespace std;

void swap(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr,int low,int high)
{
    cout<<"Low = "<<low<<"and high = "<<high<<endl;
    int i = low;
    int j;
    for(j = low;j<high;j++)
    {
        if(arr[j]<arr[high])
            {
                swap(&arr[j],&arr[i]);
                i++;
            }    
    }
    swap(&arr[i],&arr[high]);
    return i;
}

void quickSort(int* arr,int low,int high)
{
    if(low >= high)return;

    int pi = partition(arr,low,high);

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}

int main()
{
    cout<<"Enter size of array :";
    int i,size;
    cin>>size;
    cout<<"Enter Elements : ";
    int * arr = new int[size];
    for(i = 0; i< size; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,size-1);

    cout<<"Sorted array : [";
    for(i = 0; i<size-1;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[i]<<"]"<<endl;

}