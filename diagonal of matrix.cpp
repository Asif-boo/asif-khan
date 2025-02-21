#include <iostream>
using namespace std;
//program to find the diagonal of the matrix
int main(){
	int matrix[10][10];
int r,c;
int i,j;
cout<<"\n order of the matrix \n";
cout<<"rows";
cin>>r;
cout<<"coloumns";
cin>>c;
cout<<"enter values \n ````````````\n";
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cin>>matrix[i][j];
		
	}
}
cout<<"diagonal elements"
for(i=0;i<r;i++)
{
	cout<<endl;
	for(j=0;j<c;j++)
	{
		if(i==j)
		{
			cout<<"\t"<<matrix[i][j];
			
		}
	}
}



return 0;
}

