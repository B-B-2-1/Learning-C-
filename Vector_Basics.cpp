
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    vector<int> vec;//declaring vector
    int size,i,temp;
    /////////////////////////////////////input
    cout<<"Enter size: ";
    cin>>size;
    srand(time(0));
    for(i = 0;i<size;i++)
    {
        vec.push_back(rand()%100);
    }
    cout<<endl;
    for(int x: vec)
    {
        cout<<x<<' ';
    }
    cout<<endl;
    /////////////////////////////////////Sorting
    /*sort(vec.begin(),vec.end());
    cout<<"Sorted array :"<<endl;
    for(int x: vec)
    {
        cout<<x<<' ';
    }
    cout<<endl;
    */
    ////////////////////////////////////modifying
    /*
    for(int &x: vec)
    {
        if(x%2 ==0) x=0;
    }
    cout<<"Array with even numbers replaced by 0:"<<endl;
    for(int x: vec)
    {
        cout<<x<<' ';
    }
    cout<<endl;
    */
    ////////////////////////////////////Upper and lower bound
    auto it = upper_bound(vec.begin(),vec.end(),vec[4]);
    cout<<"Upper bound :"<<*it<<" and ";
    it = lower_bound(vec.begin(),vec.end(),vec[4]);
    cout<<"Lower_bound :"<<*it<<endl;


    return 0;
}

