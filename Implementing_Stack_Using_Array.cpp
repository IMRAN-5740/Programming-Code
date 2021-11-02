#include<bits/stdc++.h>
using namespace std;

struct Stack
{
int size;
int top;
int *arr;
};

int isEmpty(struct Stack *ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFulled(struct Stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	struct Stack *s=(struct Stack*)malloc(sizeof(struct Stack));
	s->size=80;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int ));
	
	s->top++;
	if(isEmpty(s))
	{
		cout<<"The Stack is Empty"<<endl;
	}
	else
	{
		cout<<"The Stack is not Empty"<<endl;
	}
	
	return 0;
}