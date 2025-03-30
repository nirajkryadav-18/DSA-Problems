// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, row,col;
//     cout<<"enter the number:";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=5-(row-1);col=col+1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number:";
    cin>>n;
    for(row=n;row>=1;row=row-1)
    {
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}