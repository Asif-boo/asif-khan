#include <iostream>
using namespace std;

int main(){
	const int n=5;
	const int len=30;
	int i;
	char name [10];
	char list[n][len];
	cout<<"creat list \n\n";
	for(i=0;i<n;i++)
	{
		cout<<"enter name at loc#"<<i+1<<":";
		gets(&list[i][0]);
		
	}
cout<<"\n\n displaying now \n\n";
for(i=0;i<n;i++)
{
	cout<<"enter name at loc#"<<i+1<<":";
	puts(&list[i][0]);
}




return 0;
}

