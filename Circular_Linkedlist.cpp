//Circular Linkedlist 
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *link;
};

void printlist(struct node *n1)
{
	struct node *ptr=n1;
	do
	{
	  cout<<"Element: "<<ptr->data<<"\n";
	   ptr=ptr->link;	
	}
	while(ptr!=n1);	
}
int main()
{
	struct node *n1,*n2,*n3,*n4;
	n1= new node();
	n2= new node();
	n3= new node();
	n4= new node();
	
	n1->data=10;
	n1->link=n2;
	n2->data=20;
	n2->link=n3;
	n3->data=30;
	n3->link=n4;
	n4->data=40;
	n4->link=n1;
	
	printlist(n1);
}
