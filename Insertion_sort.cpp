#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int n)
{
	int arr[n+1];
	arr[0]=INT_MIN;
	//cout<<"Enter the value of array :"<<endl;
	for(int i=1;i<=n;i++)
	{
		//cin>>arr[i];
		arr[i]=rand()%100; //ramdom input 
	}

	cout<<"Print unsorted value of array :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";

	for(int j=2;j<=n;j++)
	{
		int i=j-1;
		int temp=arr[j];
		while(temp<arr[i])
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=temp;
	}

	cout<<"Print  the sorted value  of array :"<<endl;
	for(int j=1;j<=n;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number of N :";
	cin>>n;
	InsertionSort(n);
	return 0;
}