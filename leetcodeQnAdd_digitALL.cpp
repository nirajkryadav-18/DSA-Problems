#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    while(num>9)
    {
        int ans=0,rem;
        while(num!=0)
        {
            rem=num%10;  //remindre;

            num=num/10;  //number;

            ans=ans+rem;
        }
        cout<<ans<<endl;
    }
}