#include<iostream>
using namespace std;


int factorial(int n,int m)  //Calculate factorial of n, but stop in m steps
                            //eg: factorial(5,5) -> 5x4x3x2x1 = 120  but factorial(5,2) -> 5x4 = 20
{
    int c = 1;

    while(m != 0 && n != 0)
    {
        c = c*n;
        n--;
        m--;
    }
    return c;
}

int pascal_row(int row)
{
    for(int i = 0; i<=row; i++)
    {
        int c = factorial(row,i)/factorial(i,i);
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}

int main()
{
    for(int i = 0;i<10;i++)
    pascal_row(i);
    return 0;

}