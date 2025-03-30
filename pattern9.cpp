#include <iostream>
using namespace std;
int main()
{
    int row,col;
    //cout<<"enter the number:";
    //cin>>n;
    for(row=1;row<=5;row=row+1)
    {
        for(char col='a';col<='e';col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}