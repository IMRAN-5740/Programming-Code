#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=sqrt(n)+1;
	int ar[k];
	int i=0;

	if(n==0)
	{
		cout<<0;
	}else
	{
		while(n){
			int rem=n%2;
			n=n/2;
			ar[i]=rem;
			i++;
		}
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<ar[j]<<" ";
	}
	cout<<"\n";
	return 0;
}