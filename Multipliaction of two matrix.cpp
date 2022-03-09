#include<iostream>
using namespace std;
int main()
{
	int c1,c2,r1,r2;
	cout<<"Enter the number of rows of first matrix:"<<endl;
	cin>>r1;
	cout<<"Enter the number of columns of first matrix:"<<endl;
	cin>>c1;
	cout<<"Enter the number of rows of second matrix:"<<endl;
	cin>>r2;
	cout<<"Enter the number of columns of second matrix:"<<endl;
	cin>>c2;
	int a[r1][c1];
	int b[r2][c2];
	if(c1!=r2)
	{
		cout<<"Multiplication of matrix is not possible"<<endl;
		return 0;
	}
	else
	{
		//input for first matrix
		cout<<"Enter the elements of matrix 1 :"<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				cout<<"Enter the value of["<<i+1<<"]["<<j+1<<"]:";
				cin>>a[i][j];
			}
		}
		cout<<endl<<endl<<"FIRST MATRIX:"<<endl;
		for(int d=0;d<r1;d++)
		{
			for(int e=0;e<c1;e++)
			{
				cout<<a[d][e]<<" ";
			}
			cout<<endl;
		}
		//input for second matrix
		cin.ignore();
		cout<<"Enter the elements of matrix 2 :"<<endl;
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				cout<<"Enter the value of["<<i+1<<"]["<<j+1<<"]:";
				cin>>b[i][j];
			}
		}
		cout<<endl<<endl<<"SECOND MATRIX:"<<endl;
		for(int d=0;d<r2;d++)
		{
			for(int e=0;e<c2;e++)
			{
				cout<<b[d][e]<<" ";
			}
			cout<<endl;
		}
		int c[r1][c2];
		//input zer0 for third matrix
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				c[i][j]=0;
			}
		}
		//Multiplication
		int i,j,k;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		//output
		cout<<endl<<endl<<"FINAL ANSWER AFTER MULTIPLICATION:"<<endl;
		for(int d=0;d<r1;d++)
		{
			for(int e=0;e<c2;e++)
			{
				cout<<c[d][e]<<" ";
			}
			cout<<endl;
		}
	}
}
