#include <iostream>
using namespace std;
void line(char ch,int n)
{
	for( int i=1;i<n;i++)
	cout<<ch;
	cout<<endl;
	
}
int main(){
	line('A',5);
line('=',10);
cout<<"wlcm to cpp \n";
line('+',15);
line('*',20);



return 0;
}

