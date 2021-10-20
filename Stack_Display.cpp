//Implement Stack Using Array with Push & Pop operations
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
#define SIZE 5

int stack[SIZE];
int top = -1;

//To Display elements in Satck
void display()
{
    if(top == -1)                               
    {
        cout << "Stack is empty!";
    }
    for(int i=top;i>= 0;i--)
    cout << stack[i] <<"\n";
}

//To insert elements in Stack
void push(int val)   
{
    if (top == SIZE - 1)
	{
        cout << "Stack is full!";                  
    }
    top++;
    stack[top] = val;
}

//To remove the elements from Stack
int pop()
{
    int val;
    if (top == -1)
	{
        cout << "Stack is empty!";                 
    }
    val = stack[top];
    top--;
    return val;
}

int main()
{
    push(17);
    push(34);
    push(57);
    push(49);
    push(82);

    cout << "After push-\nElements in Stack is:\n";
    display();

    cout << "\nRemove First Element " <<pop();
    cout << "\nAfter pop-\nElements in Stack is:\n";
    display();
}
