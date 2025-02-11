#include<iostream>
using namespace std;

int main(){
	
int age;
cout <<"tell me your age";
cin>>age;
if(age==18)	{
cout<<"you can come my party "<<endl;	
	
}
else if(age==20)	{
cout<<"you are older"<<endl;
}
else if((age>20)&&(age<30)){
cout<<"make some reason";	
}	
	

switch(age)
{
case 16:
cout<<"you are a soldier";
break;
case 25:
	cout<<"you are enthusist";
	break;
	case 40:
		cout<<"you are wise";
		break;
default:
cout<<"no special case";
		
}
	
return 0;	
	
}
