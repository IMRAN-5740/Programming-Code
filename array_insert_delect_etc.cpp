#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int  n)
{
	cout<<"Inserting Element and Before sorting array:"<<"\n";
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
int  indInsertion(int arr[],int size,int element,int capacity,int index){
	if(size>=capacity){
		return -1;
	}
	for(int i=size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}
int main(){
	int size;
	cin>>size;
	int arr[size+1];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		
	}
	int index,element;
	cout<<"Enter the  Index number and Element"<<endl;
	cin>>index>>element;
	indInsertion(arr,size,element,size+1,index);
	size++;
	display(arr,size);
	return 0;
}