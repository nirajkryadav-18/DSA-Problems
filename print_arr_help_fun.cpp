#include <iostream>
using namespace std;    // print the array of element using function;

void fun(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={3,2,1,6,7};
    fun(arr,5);
    return 0;
}