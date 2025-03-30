#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number:";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        char name='a'+row-1;
        for(col=1;col<=row;col=col+1)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}