#include <iostream>
using namespace std;

int main() {
	// your code goes here
     long long int t;
     cin>>t;
     while(t--)
     {
         long long int n,x,k;
         cin>>n>>x>>k;
         int rem=(n+1)%k;
         if(x%k==0 || x%k==rem)
         cout<<"YES";
         else
         cout<<"NO";
         cout<<endl;
     }
     return 0;
}
