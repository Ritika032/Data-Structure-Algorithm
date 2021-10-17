//WAP to insert an element in linked list at the last position.
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* link;
};
void printlist(struct node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"Element: "<<ptr->data<<"\n";
		ptr=ptr->link;
	}
}
struct node* insertatlast(struct node *n5,int data)
{
 struct node *last;
 last = (struct node*)malloc(sizeof(struct node));
 
 n5->link=last;
 last->link=NULL;
 last->data=data;
 return last;	
}
int main()
{
struct node *n1,*n2,*n3,*n4,*n5;
//Allocate memory for nodes in the linked list
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));

n1->data=10;  
n1->link=n2;

n2->data=20;
n2->link=n3;

n3->data=30;
n3->link=n4;

n4->data=40;
n4->link=n5;

n5->data=50;
n5->link=NULL;

cout<<"Linked List Before Insertion:\n";
printlist(n1);
n5=insertatlast(n5,60);
cout<<"\nLinked List After Insertion:\n";
printlist(n1);
return 0;
}
