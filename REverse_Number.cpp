#include<bits/stdc++.h>
using namespace std;

int ReverseValue(int n)
{
	int rev=0;
	while(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}

int main()
{
	int n;
	cin>>n;
	int rev=ReverseValue(n);
	cout<<rev<<endl;
	return 0;
}