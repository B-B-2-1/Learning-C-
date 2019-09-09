#include <iostream>
using namespace std;

int main()
{
    int j,i,max1 = 0,min1 = 0,max2 = 1,min2 = 1,size,maxDiff,minDiff,diff;
    cout<<"Enter number of elements"<<endl;
    cin>>size;
    int* arr = new int[size];
    for(i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    maxDiff = arr[0]-arr[1];
    if(maxDiff<0)maxDiff *= -1;
    minDiff = arr[0] - arr[1];
    if(minDiff<0) minDiff *= -1;
    for(i = 0;i<size-1;i++)
    {
        for(j = i+1;j<size;j++)
        {
            diff = arr[i]-arr[j];
            if(diff<0)diff*= -1;
            if(diff<minDiff)
            {
                minDiff = diff;
                min1 = i;
                min2 = j;
            }
            if(diff>maxDiff)
            {
                maxDiff = diff;
                max1 = i;
                max2 = j;
            }
        }
    }
    cout<<"Max diff indices :"<<max1<<" and "<<max2<<endl;
    cout<<"Min diff indices :"<<min1<<" and "<<min2<<endl;

}