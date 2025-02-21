#include <iostream>
#include<string.h>
using namespace std;

int main(){
char string[20]="this is a string";
char*ptr ;
char c='r';
ptr=strchr(string,c);
if(ptr){
	cout<<"'r' is at position "<<ptr-string ;//calculate the position of o 
	
}
else 
{
	cout<<"this character was not found";
	
}



return 0;
}

