#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number:";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=n;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}