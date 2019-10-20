#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/*
Grequency game

Given an array, find the largest number with the smallest frequency
First we sort the array in ascending order. Then we start taking 
the count of numbersfrom the back(largest). Since it is sorted, same
numbers occur together and as long as the current number equals the previous
number(temp), the frequency of that number (count) can be incremented. As soon as a 
different number is encounterd in this iteration, we check the count
of the previos number and if it is lesser than the minimum count (countmin), 
assumes the number as the 'Least frequent Largest Number'(num) and continues
the process toll the begining of the array is reached. Once that is done, it checks 
the above conditions for the smallest number, i,e, the number at the first array position
array[0], and if that number has the lowest frequency, then assigns that number to 'num'.

*/

int main()
{

    vector<int> array;
    array = {2, 2, 5, 10, 50, 1};
    sort(array.begin(),array.end());
    auto it = array.end() - 1;
    int temp = *it;
    int count = 0,countmin = 10000,num = *it;
    while(it>=array.begin())
    {
        if(*it == temp)count++;
        else
        {
            if(count<countmin)
            {
                countmin = count;
                num = temp;
            }
            temp = *it;
            count = 1;
        }
        it--;
    }
    if(count<countmin)
    {
        countmin = count;
        num = temp;
    }
    cout<<num<<" , "<<countmin;
    return 0;
}