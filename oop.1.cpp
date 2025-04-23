#include <iostream>
using namespace std;
 class student{
 	public:
 		string name;
 		int age ;
 	double *cgpaptr;
 	student(string name,int age,float cgpa)
 	{
 	this->name=name;
	 this->age=age;
	 cgpaptr=new double;
	 *cgpaptr=cgpa;
	 	
	 }
	 student(student &obj)
 	{
 	this->name=obj.name;
	 this->age=obj.age;
	 cgpaptr=new double;
	 *cgpaptr=*obj.cgpaptr	;
	 	 
	 
	 	
	 }
	
	 void recInfo(){
	 	
	 	cout<<"enter all subject marks to calculate your cgpa"<<endl;
	 	
	 	int n=6;
	 	int sum=0;
	 	 int subjects[n];
	for(int i=1;i<=n;i++){
	
		
		cout<<"subject :"<<i;
		cin>>subjects[i];
		float grade=n/85*4; 
	cout<<grade;
	 }
	 	
	for(int i=1;i<=n;i++){
		
		sum=sum+subjects[i];
	
		 }
		 	
	 	int cgpa=sum/6;
	 	int cgpa1=cgpa*100;
	 	cout<<"cgpa="<<cgpa1;
	 	

	 	//int cgpa=n/6*100;
	 }
	 void setInfo(){

	 	cout<<"enter your name"<<endl;
	 	cin>>name;
	 	
	 	cout<<"name="<<name<<endl;
	 	cout<<"enter your age"<<endl;
	 	cin>>age;
	 	cout<<"age="<<age<<endl;
//	 	cout<<"enter your cgpa"<<endl;
//	 	cin>>*cgpaptr;
//	 	cout<<"cgpa="<<*cgpaptr<<endl;
	 }
 	
 	
 };
 int main(){
 	student s1("asif",20,3.9);
 
s1.setInfo();
s1.recInfo();
 
 	return 0;
 	
 	
 }
