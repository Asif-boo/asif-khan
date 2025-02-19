#include <iostream>
using namespace std;

int main(){
int list[50];
int i,no;
cout<<"number of elements \n";
cin>>no;
cout<<"enter " << no << " elements";
for(i=0;i<=no;i++)
cin>>list[i];
//sorting in ascending order
int pass,iter,temp;
for(pass=1;pass<=no-1;pass++)//this loop is for itteration
  {
  	for(iter=0;iter<=no-pass;iter++)//this loop is for comparison
  	{
  		if(list[iter]>list[iter+1])
  		{
  			temp=list[iter];
  			list[iter]=list[iter+1];
  			list[iter+1]=temp;
		  }
	  }
  }
//displaying sorted list
cout<<"sorted list is \n";
for(i=0;i<no;i++)
{
	cout<<"\n"<<list[i];
}


return 0;
}

