#include <iostream>
using namespace std;    // find the any element of array;
int main()
{
    int arr[6]={45,14,58,89,23,12};
    int index=-1;

    int  x;
    cout<<"enter the number:";
    cin>>x;


    for(int i=0;i<=5;i++)
    {
        if(arr[i]==x)
        {
            index=i;
            break;
        }
    }
    cout<<index;
    
}