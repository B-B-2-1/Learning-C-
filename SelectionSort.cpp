
#include <iostream>

using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int* arr,int size)
{
    int i,j,min_indx;
    for(i = 0;i<size-1;i++)
    {
        min_indx = i;
        
        for(j = i+1; j<size; j++)
        {
            if(arr[min_indx]>arr[j])
            min_indx = j;
        }
        
        swap(&arr[min_indx], &arr[i]);
    }

    cout<<endl<<"Sorted Array is[";
    for (i = 0;i<size-1;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[i]<<"]";
}

int main()
{
    int i;
    cout<<"Hello World";
    int array[] = {2,4,5,6,7,8,5,4,3};
    cout<<"[";
    for (i = 0;i<sizeof(array)/sizeof(int) -1;i++)
    {
        cout<<array[i]<<", ";
    }
    cout<<array[i]<<"]";
    selectionSort(array,sizeof(array)/sizeof(int));
    return 0;
}
