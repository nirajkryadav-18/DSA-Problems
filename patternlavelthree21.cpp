#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number:";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }
        for(char name='A';name<='A'+row-1;name=name+1)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }

}