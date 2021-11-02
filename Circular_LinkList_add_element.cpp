#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};

void LinkListTraversal(struct Node *head)
{
	struct Node *ptr=head;
	// cout<<ptr->data<<" ";
	// ptr=ptr->next;
	do
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	while(ptr!=head);

	cout<<"\n";
}

struct Node * LinklistInsertInFirst(struct Node*head,int data)
{
	struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node *p;
	p=head->next;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;

}


int main()
{
	struct Node *head=(struct Node*)malloc(sizeof(struct Node));
	struct Node *second=(struct Node*)malloc(sizeof(struct Node));
	struct Node *third=(struct Node*)malloc(sizeof(struct Node));
	struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
	struct Node *fifth=(struct Node*)malloc(sizeof(struct Node));
	head->data=4;
	head->next=second;
	second->data=3;
	second->next=third;
	third->data=8;
	third->next=fourth;
	fourth->data=1;
	fourth->next=fifth;
	fifth->data=10;
	fifth->next=head;
	cout<<"Given the Linklist:"<<"\n";
	LinkListTraversal(head);
	int k;
	cout<<"Enter the Number that is insert in First Position :"<<"\n";
	cin>>k;

	head=LinklistInsertInFirst(head,k);
	cout<<"After Inserstion in value of Index First :"<<endl;
	LinkListTraversal(head);
	return 0;
}



///Double Link List
// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
// 	int data;
// 	struct Node *next;
// 	struct Node *prev;
// };
// void LinkListDisplay(struct Node *head)
// {
// 	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
// 		ptr=head;
// 		//ptr=ptr->next;
// 		do{
// 			cout<<ptr->data<<" ";
// 			ptr=ptr->next;
// 			//ptr=ptr->prev;
// 		}
// 		while(ptr->next!=ptr->prev);
		
	
// 	cout<<"\n";
// }

// int main(){
// 	struct Node *head=(struct Node*)malloc(sizeof(struct Node));
// 	struct Node *second=(struct Node*)malloc(sizeof(struct Node));
// 	struct Node *third=(struct Node*)malloc(sizeof(struct Node));
// 	struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
// 	struct Node *fifth=(struct Node*)malloc(sizeof(struct Node));

// 	head->data=2;
// 	head->next=second;
// 	head->prev=NULL;

// 	second->data=3;
// 	head->next=third;
// 	head->prev=head;

// 	third->data=66;
// 	third->next=fourth;
// 	third->prev=second;

// 	fourth->data=5;
// 	fourth->next=fifth;
// 	fourth->prev=third;

// 	fifth->data=6;
// 	fifth->next=NULL;
// 	fifth->prev=fourth;
// 	LinkListDisplay(head);
// 	return 0;
// }