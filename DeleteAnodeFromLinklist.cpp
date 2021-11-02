#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
void Display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

//Case 1:  Deleting First Node from the linklist:
// struct Node* DeletingFirstNode(struct Node *head)
// {
// 	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

// 	ptr=head;
// 	head=head->next;
// 	free(ptr);
// 	return head;
// }

// //Case 2:  Deleting Index in between  from the linklist:
struct Node* DeletingNodeatIndex(struct Node *head,int index)
{
	struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

	ptr=head;
	int i=0;
	while(i!=index-2)
	{
		ptr=ptr->next;
		i++;
	}
	struct Node *q;
	q=ptr->next;
	ptr->next=q->next;
	free(q);
	return head;
}


//Case 3: Delete the last Node in the given Linklist:
struct Node* DeleteLastNode(struct Node* head)
{
	struct Node *ptr;
	ptr=head;
	struct Node *q;
	q=head->next;

	while(q->next!=NULL){
		ptr=ptr->next;
		q=q->next;
	}
	ptr->next=q->next;
	free(q);
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
	fifth->next=NULL;
	cout<<"Given the Linklist:"<<"\n";
	Display(head);

	// head=DeletingFirstNode(head);
	// cout<<"Given the Linklist afer First Node delete:"<<"\n";
	// Display(head);

	int index;
	cout<<"Enter the Index number that i want to delete :"<<endl;
	cin>>index;
	head=DeletingNodeatIndex(head,index);
	cout<<"Given the Linklist after Node  delete:"<<"\n";
	Display(head);
	// head=DeleteLastNode(head);
	// Display(head);

	return 0;
}