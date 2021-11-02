#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int size,int k)
{
	
	int low,mid,high;
	low=0;
	high=size-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;

		if(arr[mid]==k)
		{
			return mid;

		}
		else if(arr[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}

	}
	return  -1;
}
void Display(int arr[],int size)
	{
		cout<<"Print the Array value"<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
int main(){
	int size;
	cout<<"Enter the array size :"<<endl;
	cin>>size;
	int arr[size+1];
	cout<<"Enter the value of Array "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	Display(arr,size);
	int k;
	cout<<"Enter the searching Value :"<<"\n";
	cin>>k;
	
	int element=BinarySearch(arr,size,k);
	//another way
	if(element==-1){
		printf("The searching value %d is not found",k);
	}
	else{
		printf("The searching value %d is found the Array of index: %d \n",k,element+1);
	}
	// such a way 
	
		// if(element>=0)
		// 	{
		// 		printf("The searching value %d is found the Array of index: %d \n",k,element+1);
				
		// 	}		
		// else
		// 	{
		// 		printf("The searching value %d is not found",k);

		// 	}

	return 0;
}