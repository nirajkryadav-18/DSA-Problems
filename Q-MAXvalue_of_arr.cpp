#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5]={78,94,56,12,45};
    int ans=INT_MIN;

   for(int i=0;i<5;i++)
   {
    if(arr[i]>ans)
    {
        ans=arr[1];
    }
   }
   cout<<ans<<endl;
}