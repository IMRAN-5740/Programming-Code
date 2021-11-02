# Programming-Code
LinkList
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int  data;
	struct Node *next;
};

void LinkListTraversal(struct Node *ptr)
{
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

// struct Node* InsertAtfirst(struct Node*head,int data)
// {
// 		struct Node *ptr =	(struct Node*) malloc(sizeof(struct Node));
// 		ptr->next=head;
// 		ptr->data=data;
// 		return ptr;
// }

struct Node* InsertAtIndex(struct Node*head,int data,int index)
{
		struct Node *ptr =	(struct Node*) malloc(sizeof(struct Node));
		struct Node *p;
		p =head;
		int i=0;
		while(i!=index-1)
		{
			p=p->next;
			i++;
		}
		ptr->data=data;
		ptr->next=p->next;
		p->next=ptr;
		return head;
}

// struct Node* InsertAtEnd(struct Node *head,int data)
// {
// 		struct Node *ptr =	(struct Node*) malloc(sizeof(struct Node));
// 		struct Node *p;
// 		ptr->data=data;
// 		p =head;
// 		while(p->next!=NULL)
// 		{
// 			p=p->next;
// 		}
// 		p->next=ptr;
// 		ptr->next=NULL;
// 		return head;
// }

// struct Node* InsertAfterNode(struct Node *head, struct Node *previousNode, int data)
// {
// 		struct Node *ptr =	(struct Node*) malloc(sizeof(struct Node));
// 		//struct Node *p;
// 		ptr->data=data;
// 		ptr->next=previousNode->next;
// 		previousNode->next=ptr;
// 		return head;
// }

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
	cout<<"This LinkList Elements are  Given Below:"<<"\n";
	LinkListTraversal(head);


	// int n;
	// cout<<"Enter the number  that  i want to add in first :"<<"\n";
	// cin>>n;
	// head= InsertAtfirst(head,n);
	// cout<<"This LinkList Elements are  Given after insert beginning a value :"<<"\n";
	// LinkListTraversal(head);


	int index;
	cout<<"Enter the index that  i want to insert in between :"<<endl;
	cin>>index;
	int n;
	cout<<"Enter the data that i want to insert"<<endl;
	cin>>n;
	head=InsertAtIndex(head,n,index);
	cout<<"Given the Linklist Elements  that  I want to insert in between :"<<endl;
	LinkListTraversal(head);


	// int k;
	// cout<<"Enter the number that i want to insert in end:"<<endl;
	// cin>>k;
	// head= InsertAtEnd(head,k);
	// cout<<"Enter the number  that  i want to insert in end :"<<endl;
	// LinkListTraversal(head);


	// int m;
	// cout<<"Enter the number that i want to insert in after Node :"<<endl;
	// cin>>m;
	// head= InsertAfterNode(head,second,m);
	// cout<<"Enter the number  that  i want to insert in after Node  :"<<endl;
	// LinkListTraversal(head);

	return 0;
}
