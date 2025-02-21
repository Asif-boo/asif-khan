 #include<iostream>
 using namespace std;
 
 int main() {
    
	  
	  
	  
	  
//selection struture ---if-else statment	  
	  int age;
cout<<"tell me your age"<<endl;
cin>>age;
if((age<18)&&(age>10)){
cout <<"you cannot come to my party"<<endl;
}
  else if(age==18){
	cout<<" you are a kid and you will get a kid pass to the party"<<endl;
}
else if(age<10 ){

	cout<<"you  are baby";
} 
else if(age=34){
cout<<"you are something";

}
	

//switch case
switch (age)
{

case 18:
	cout<<"you are allowed "<<endl;
	break;
	
	case 22:
		cout<<"you are super "<<endl;
		break;
		
case 44:
cout <<"you are thinker"<<endl;
break;
case 8:
cout<<"\n you are not allowed"<<endl;
break;
default:
cout<<"no speceial case"<<endl;





return 0;
}



}



