#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number:";
    cin>>n;


    int count=1;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n;col=col+1)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}
    