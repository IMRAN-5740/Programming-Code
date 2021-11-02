#include<bits/stdc++.h>
using namespace std;
int LenearSerach(int arr[],int n,int k)
{
	
	for(int i=0;i<n;i++)
	{
		//searching the element
		if(arr[i]==k)
		{
			return i;
		}
	}
	return -1;
}
  
void Display(int arr[],int n)
{
	cout<<"Print the  sorting array :"<<endl;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int size;
	cin>>size;
	int arr[size+1];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the value that is searching :"<<endl;
	cin>>k;
	int element=LenearSerach(arr,size,k);
	if(element>=0)
	{
			printf("The searching value %d found in the index of %d \n",k,element+1);

		}else
		{
			cout<<"This value is not found"<<endl;
		}
	Display(arr,size);
	return 0;
}