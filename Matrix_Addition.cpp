//Addition of Matrix
#include<iostream>              
#include<conio.h>                          
#include<process.h>
using namespace std;                           
int main()                                     
{
int A[10][10],B[10][10],sum[10][10];
int m,n,p,q,i,j;
cout<<"Enter the size of matrix A:\n";
cin>>m>>n;
cout<<"Enter the size of matrix B:\n";
cin>>p>>q;
if(m!=p||n!=q)
{
	cout<<"Matrix addition is not possible\n";
	exit(0);
}
cout<<"Enter the values of matrix A:\n";
for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 	cin>>A[i][j];
    }
 }
 cout<<"Enter the values of matrix B:\n";
   for(i=0;i<p;i++)
   {
 	for(j=0;j<q;j++)
 	cin>>B[i][j];
   }
   for(i=0;i<m;i++)
    {
 	  for(j=0;j<n;j++)
      sum[i][j]=A[i][j]+B[i][j];
    }
 cout<<"After Addition output:\n";
 for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    cout<<sum[i][j]<<" ";
  }
return 0;
}
