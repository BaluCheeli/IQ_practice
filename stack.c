#include<stdio.h>
#define s 7  
int stack[s];
int top=-1;
void push(int ele)
{
	if(top==s-1)
	{
		printf("stck is full\n");
		return;
	}
	else
	{
	top++;          
	stack[top]=ele;
	}
}
void pop()
{
    getmin();
	if(top==-1)
	{	
		printf("stck is empty\n");
		return;
	}
	else
	{
	printf("popped element is :  %d\n",stack[top]);
	top--;
	}
}
void display()
{
	if(top== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)
	printf("%d\n",stack[i]);
}
void getmin()
{
    int min;
    min=stack[top];
    for(int i=0;i<top;i++)
    {
        if(stack[i]<min)
        min=stack[i];
    }
    printf("minimum element in stack is = %d \n",min);
}
int main()
{
	push(7);
	push(33);
	push(5);
	push(10);
	push(3);
	push(100);
	push(25);
	display();
	pop();
	pop();
	pop();
	pop();
}
