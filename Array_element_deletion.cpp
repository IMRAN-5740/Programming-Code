#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int  n)
{
	cout<<"Deleting  Element and Before sorting array:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	sort(arr,arr+n);
	cout<<"After sorting array:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int IndDeletion(int arr[],int size,int index)
{
	for(int i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	return 0;
}
int main(){
	int size;
	cin>>size;
	int arr[size+1];
	cout<<"Enter the array value :"<<"\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int index;
	cin>>index;
	IndDeletion(arr,size,index);
	size--;
	display(arr,size);
	return 0;
}