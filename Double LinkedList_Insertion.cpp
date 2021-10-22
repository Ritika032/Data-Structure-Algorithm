#include <iostream>
#include<stdlib.h>
using namespace std;
struct Dnode
{
    int data;
    struct Dnode *prev;
    struct Dnode *next;
}*L=NULL,*R=NULL;

//Creating DNode
struct Dnode *createDnode(int val)
{
    struct Dnode *node;
    node=(struct Dnode*)malloc(sizeof(struct Dnode));
    node->data=val;
    return(node);
}

//Display
void display()
{
	struct Dnode *ptr;
	ptr=L;
	while(ptr!=NULL)
	{
	    cout<<ptr->data<<"\n";
	    ptr=ptr->next;
	}
}
//Insertion at beginning
void insertatfirst()
{
	struct Dnode *first;
	first=createDnode(5);
	first->prev=NULL;
	first->next=L;
	L->prev=first;
	L=first;
}
//Insertion at the last
void insertatlast()
{
	struct Dnode *last;
	last=createDnode(40);
	last->next=NULL;
	R->next=last;
	last->prev=R;
	R=last;
}

int main() 
{	
	struct Dnode *d1,*d2,*d3;
	
	d1=createDnode(10);
	d2=createDnode(20);
	d3=createDnode(30);
	d1->prev=NULL;
	d1->next=d2;
	L=d1;
	d2->prev=d1;
	d2->next=d3;
	d3->prev=d2;
	d3->next=NULL;
    R=d3;
	
	cout<<"Dobly Linked List:\n";
	display();
	cout<<"\nDoubly Linked List after Lmost Insertion:\n";
	insertatfirst();
	display();
    cout<<"\nDoubly Linked List after Rmost Insertion:\n";
	insertatlast();
	display();
	
	return 0;
}
