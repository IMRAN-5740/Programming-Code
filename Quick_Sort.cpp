#include<bits/stdc++.h>
using namespace std;
int arr[100];

void QuickSort(int f,int l)
{
	int i,j;
	int temp;
	if(f<l)
	{
		i=f+1;
		j=l;
		while(arr[i]<arr[f])
		{
			i+=1;
		}
		while(arr[j]>arr[f])
		{
			j-=1;
		}
		while(i<j)
		{
			//swapping 
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			//swap(arr[i],arr[j]);
			while(arr[i]<arr[f])
			{
				i+=1;
			}
			while(arr[j]>arr[f])
			{
				j-=1;
			}
		}
			//swapping 
			temp=arr[j];
			arr[j]=arr[f];
			arr[f]=temp;
			//swap(arr[i],arr[j]);
			QuickSort(f,j-1);
			QuickSort(j+1,l);
	}

}


int main(){
	int n;
	cout<<"Enter the number of element that i want to sort :";
	cin>>n;
	//int arr[n+1];
	//cout<<"Enter the Elements of unsorted array :"<<endl;
	for(int i=0;i<n;i++)
	{
		//cin>>arr[i];
		arr[i]=rand()%100; 
	}
	cout<<"Print  the Elements of unsorted array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"Print the sorted array :"<<endl;
	for(int i=0;i<n;i++)
	{
		QuickSort(0,n-1);
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}