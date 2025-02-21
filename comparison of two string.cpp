#include <iostream>
#include<string.h>
using namespace std;

int main(){
	char string1[20]="honey";
	char string2[25];
	int n;
	cout<<"enter password";
	cin>>string2;
	n=strnicmp(string1,string2,6);
	if(n==0)
	{
		cout<<"\n correct password ";
		}
	else if(n!=0){
			cout<<"\n invalid password";
		
	strcpy(string2,string1);
	//cout<<"\n the correct password is="<<string2;
	cout<<"\n please enter a correct password \n";
}

return 0;
}

