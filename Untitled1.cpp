#include <iostream>
using namespace std;

class team {
	
	
	string name ;
	int age;
	
	
	
	public :
		
		void getname(){
			
			
			cout<<"insert name : ";
			
			cin>>name;
			cout<<"insert your age are : ";
			cin>>age;
		}
		
		
		void display(){
			
			
			cout<<"your name are :"<<name<<endl;
			cout<<"your age are  :"<<age<<endl;
		}
	
	
	
	
	
	
};

int main(){

team a;
a.getname();
a.display();

a.

return 0;
}

