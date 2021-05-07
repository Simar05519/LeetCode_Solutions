#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,y;
	cin>>t;
	while(t--)
	{
	    long long int x,a,b;
	    cin>>x>>a>>b;
	    y= (a+(100-x)*b)*10;
	    	cout<<y<<endl;
	}
	return 0;
}
