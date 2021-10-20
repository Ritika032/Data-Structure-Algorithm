//Stack Implementation with linked list using push & pop
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *link;
} *TOP = NULL;   
//To display the stack elements
void display()
{
    struct Node *temp;
    temp = TOP;
    if (TOP == NULL)
    {
        cout << "Stack is empty!";
        exit(1);
    }
    while(temp != NULL)
    {
        cout << temp -> data;
        temp = temp -> link;
        cout << "\n";
    }
}
//To insert elements in stack
void push(int data)
{
        struct Node *temp = (Node*)malloc(sizeof(struct Node));
        temp -> data = data;
        temp -> link = NULL;
    
        temp -> link = TOP;
        TOP = temp;
} 

//To remove the last element from the stack
int pop()
{ 
    struct Node* temp;
    temp = TOP;
    if(TOP == NULL)
    {cout << "Stack is empty!";
    exit(1);
    }
    int val = temp -> data;
    TOP = TOP -> link;
    free(temp);
    return val;    
}
	
	
int main()

{
	int value,number,rem;
	cout<<"Enter the number of elements to be pushed: ";
	cin>>number;
	cout<<"Push Elemets:\n";
	for(int i=0;i<number;i++)
	{
        cin>>value;
        push(value);
	}
	cout<<"Stack After pushing elements:\n";
    display();
    
	cout<<"Enter the number of elements to be removed: ";
	cin>>rem;
	if(rem==number)
	{   
	    cout<<"All are removed!\t";
	    for(int j=0;j<=number;j++)
	    {
		pop();
	    }
	}
	else if(rem<=number)
	{
		for(int j=0;j<rem;j++)
		{
		pop();
	    }
	}
	else
	{
		cout<<"Can't Remove "<<rem<<" numbers";
		cout<<"\nEnter valid number";
		exit(1);
	}
	cout<<"\nAfter removing "<<rem<<" element:\n";
    display();
}
