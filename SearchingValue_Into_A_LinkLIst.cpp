#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};

void LinkListTraversal(struct Node *ptr)
{
	cout<<"This LinkList Elements are  Given Below:"<<"\n";
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
	
}

bool Checkvalue(struct Node *head, int data){
	struct Node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data ==data)
		{
			return true;
		}
		ptr=ptr->next;
		
	}
	return false;
}

int main(){
	struct Node 	*head;
	struct Node 	*second;
	struct Node 	*third;
	struct Node 	*fourth;
	struct Node 	*fifth;
	struct Node 	*sixth;
	struct Node 	*seventh;
	struct Node 	*eightth;
	struct Node 	*ninth;
	struct Node 	*tenth;

	head=		(struct Node*) malloc(sizeof(struct Node));
	second=		(struct Node*) malloc(sizeof(struct Node));
	third=		(struct Node*) malloc(sizeof(struct Node));
	fourth=		(struct Node*) malloc(sizeof(struct Node));
	fifth=		(struct Node*) malloc(sizeof(struct Node));
	sixth=		(struct Node*) malloc(sizeof(struct Node));
	seventh=	(struct Node*) malloc(sizeof(struct Node));
	eightth=	(struct Node*) malloc(sizeof(struct Node));
	ninth=		(struct Node*) malloc(sizeof(struct Node));
	tenth=		(struct Node*) malloc(sizeof(struct Node));

	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data=4;
	fourth->next=fifth;
	fifth->data=5;
	fifth->next=sixth;
	sixth->data=6;
	sixth->next=seventh;
	seventh->data=7;
	seventh->next=eightth;
	eightth->data=8;
	eightth->next=ninth;
	ninth->data=9;
	ninth->next=tenth;
	tenth->data=10;
	tenth->next=NULL;
	LinkListTraversal(head);
	int data;
	cin>>data;
	int res=Checkvalue(head,data);
	//cout<<res<<endl;
	if(res==1)
	{
		cout<<"The Searching value is Here."<<endl;
	}else
	{
		cout<<"The Searching value is not Here"<<endl;
	}
	return 0;
}