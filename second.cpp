#include <iostream>
using namespace std;
int main ()
{
    int number;
    cout <<"enter the number:";
    cin>> number;
    if (number>0)
    {
        cout<<"positive";
    }
    else if(number==0)
    {
        cout<<"0";
    }
    else 
    {
        cout<<"negative";
    }

}