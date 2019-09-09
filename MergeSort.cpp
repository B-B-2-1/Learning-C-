#include <iostream>

using namespace std;

int inv_count = 0;

void merge(int* arr, int l,int m,int r)
{
    int i,j,n1,n2;
    n1 = m-l+1;
    n2 = r-m;

    int L_arr[n1];
    int R_arr[n2];

    for(i = 0;i<n1;i++)
    {
        L_arr[i] = arr[l+i];
    }
    for(i = 0;i<n2;i++)
    {
        R_arr[i] = arr[i+m+1];
    }

    i = 0;j = 0;int k = l;

    while(i<n1 && j<n2)
    {
        if(L_arr[i]<R_arr[j])
        {
            arr[k] = L_arr[i];
            i++;
        }
        else
        {
            inv_count+= (n1-i);
            arr[k] = R_arr[j];
            j++;       
        }
        k++;      
    }
    while(i<n1)
    {
        arr[k] = L_arr[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        arr[k] = R_arr[j];
        k++;
        j++;
    }

}

void mergeSort(int* arr,int l,int r)
{
    if(l == r) return;
    int m = (l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main()
{
    int array[] = {2,3,4,5,6,7,8,9,1,2};
    int l = sizeof(array)/sizeof(int)-1;
    mergeSort(array,0,l);
    int i;
    cout<<endl<<"Sorted Array = "<<'[';
    for( i = 0;i<sizeof(array)/sizeof(int)-1;i++)
    cout<<array[i]<<", ";
    cout<<array[i]<<']'<<endl;
    cout<<"inversion count = "<<inv_count<<endl;

}