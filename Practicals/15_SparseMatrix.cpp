#include<iostream>
using namespace std;
int main()
{
	int m,n,size=0;
	cout<<"\nEnter the number of rows:";
	cin>>m;
	cout<<"\nEnter the number of Coloumns:";
	cin>>n;
	int mat[m][n];
	cout<<"\nEnter the elements of a matrix:\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
			
		}
	}
	cout<<"\n\tThe matrix is: \n\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			if (mat[i][j] != 0) 
                size++;
		}
	}
	int res[3][size];
	for(int i=0;i<3;i++)
	// Making of new matrix 
    int k = 0; 
    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 5; j++) 
            if (mat[i][j] != 0) 
            { 
                res[0][k] = i; 
                res[1][k] = j; 
                res[2][k] = mat[i][j]; 
                k++; 
            } 
	cout<<"\n\tThe matrix is: \n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<size;j++)
		{
			cout<<res[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}
