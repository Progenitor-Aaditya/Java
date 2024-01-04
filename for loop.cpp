#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i= 1;i<=n;i++)
   {
       cout<<i<<" ";
   }
   cout<<endl;
   //alternate
   int j=1;
   for(;;)
   {
       if(j<=n)
       {
           cout<<j<<" ";
       }
       else{
           break;
       }
       j++;
   }
   cout<<endl;
   //multiple init, cond, incre/decre
   for(int a=0,b=1;a>=0&& b>=1; a--,b--)
   {
       cout<<a<<" "<<b<<endl;
   }
}