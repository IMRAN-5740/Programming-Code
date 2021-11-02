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
	if(ptr->top==-1){
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFulled(struct Stack *ptr)
{
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(struct Stack *ptr,int value)
{
	if(isFulled(ptr))
		{
			printf("Stack is Overflow cannot push %d value in this Stack\n",value);
		}
	else
		{
		ptr ->top++;
		ptr ->arr[ptr->top]=value;
		}
}

int Pop(struct Stack *ptr)
{
	if (isEmpty(ptr))
		{
			cout<<"\n";
			cout<<"Stack Underflow  i cannot pop value from the Stack"<<endl;
			return -1;
		}

	else
		{
			int value= ptr->arr[ptr->top];
			ptr->top--;
			return value;
		}
	
}

int main()
{	struct Stack *s=(struct Stack*)malloc (s->size*sizeof(struct Stack));
	s->size=10;
	s->top=-1;
	s->arr=(int *)malloc(s->size*sizeof(int ));
	cout<<"Stack has been created Successfully"<<endl;
	printf("Before pushing Stack is Empty %d\n",isFulled(s));
	printf("Before pushing Stack is Fulled %d\n",isEmpty(s));
	for(int i=0;i<s->size;i++){
		int in;
		cin>>in;
		Push(s,in);
	}
	// Push(s,1);
	// Push(s,2);
	// Push(s,3);
	// Push(s,4);
	// Push(s,5);
	// Push(s,6);
	// Push(s,7);
	// Push(s,8);
	// Push(s,9);
	// Push(s,10);

	cout<<endl;
	printf("After pushing Stack is Fulled %d\n",isFulled(s));
	printf("After pushing Stack is not Empty %d\n",isEmpty(s));

	// printf("Popped %d from the stack.\n",Pop(s));
	// printf("Popped %d from the stack.\n",Pop(s));
	// printf("Popped %d from the stack.\n",Pop(s));
	// printf("Popped %d from the stack.\n",Pop(s));

	for(int i=0;i<=s->size ;i++)
		{
			cout<<Pop(s)<<" ";
			s->top=s->top--;
		}
		cout<<"\n";
	return 0;
}