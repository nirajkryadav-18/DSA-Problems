#include <iostream>
using namespace std;
void swap(int a,int b)  // pass by value ;
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
  
    swap(a,b);
    cout<<a<<" "<<b<<" ";
    
}