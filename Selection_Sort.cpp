#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int n)
{
	int arr[n+1];
	//cout<<"Enter the value unsorted :"<<endl;
	for(int i=1;i<=n;i++)
	{
		//cin>>arr[i];
		arr[i]=rand()%100; //random input 
	}

	cout<<"Print unsorted value of array :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	int temp,cnt=0;
	for(int j=n;j>=2;j--)
	{
		temp=1;
		for(int k=2;k<=j;k++)
		{
			if(arr[temp]<arr[k])
			{
				temp=k;// update temp  position 

			}
			//swapping 
			cnt=arr[j];
			arr[j]=arr[temp];
			arr[temp]=cnt;
			//swap(arr[j],arr[temp]);
			
		}
	}

	cout<<"Print  the sorted value  of array :"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int n;
	cout<<"Enter the number of n : ";
	cin>>n;
	SelectionSort(n);
	return 0;
}