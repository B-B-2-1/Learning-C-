#include <iostream>
using namespace std;

/*
Here, the largest element in the array is split into the second-largest
element and the difference between largest and second largest. These 
two numbers replace the largest in the array.
Eg: [1 3 5 9 2] -> [1 3 5 5 4 2]
    9 was the latgest, 5 the second largest. So, 9 is split into 5 and 
    4.
*/

int main()
{
    int size,largest,secondlargest,largestindex;
    int *arr, *splitarr;
    cout<<"Enter array size : ";
    cin>>size;
    arr = new int[size];
    splitarr = new int[size+1];
    cout<<"Enter array elements: ";
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"input array = [";
    for(int i = 0; i<size-1;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<arr[size-1]<<"]"<<endl;

    largest = secondlargest = arr[0];
    for(int i = 0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largestindex = i;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest)
            secondlargest = arr[i];
    }
    for(int i = 0;i<largestindex;i++)
    {
        splitarr[i] = arr[i];
    }
    splitarr[largestindex] = secondlargest;
    splitarr[largestindex+1] = largest - secondlargest;
    if(largestindex+1!=size)
    {
        for(int i = largestindex+2;i<size+1;i++)
        {
            splitarr[i] = arr[i-1];
        }
    }    

    cout<<"Sorted array = [";
    for(int i = 0; i<size;i++)
    {
        cout<<splitarr[i]<<", ";
    }
    cout<<splitarr[size]<<"]"<<endl;
}