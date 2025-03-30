#include <iostream>
using namespace std;
void swap(int a,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
}

int main()
{
  int a,b;
cout<<"enter the numbre:";
cin>>a;
cout<<"enter the second numbreL:";
cin>>b;

swap(a,b);
cout<<a<<" "<<b<<" ";

}