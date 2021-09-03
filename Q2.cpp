//WAP To create 10 elemnt array and print it reverse.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];                                
	int i;                                 
	
	cout<<"Enter Elements of array :\n";         
	for(i=0;i<10;i++)
	{
	   cin>>arr[i];
	}
	cout<<"Elemts are:";
	for(i=0;i<10;i++)    
	{
    cout<<"\n"<<arr[i];
	}
	cout<<"\nRevrrsed elements are: ";
	for(i=9;i>=0;i--)
	{
	cout<<"\n"<<arr[i];	
	}
	return 0;
}
