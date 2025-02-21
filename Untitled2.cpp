#include <iostream>
using namespace std;
class team{
	string name;
int age;
bool gender;
public:
			void seTname(string s ,int a, bool g) //decleration
			{
				 name =s;
				 age=a;
				 gender=g;
			};
			void printinfo(){
				cout<<"name=";
				cout<<name<<endl;
				cout<<"age=";
				cout<<age<<endl;
				cout<<"gender=";
				cout<<gender<<endl;
			};

};
//void printinfo
//	cout<<"name=";
//	cout<<name<<endl;
//	cout<<"age=";
//	cout<<age<<endl;
//	cout<<"gender"<<endl;
//	cout<<gender<<endl;
//}
//};
//int main(){
//team a;
//a.name='asif';
//a.age=20;
//a.gender=1;
//team array[3];
//for(int i=0;i<3;i++){
//cout<<"name";
//cin>>array[i].name;
//cout<<"age";
//cin>>array[i].age;
//cout<<"gender";
//cin>>array[i].gender;
//}
//
//for(int i=0;i<3;i++){
//	
//	array[i].printInfo();
//}

//c=a+b;
//return c;
//}//call by refrence using pointers
//void swapPointer (int* a,int* b){
//
//    int temp=*a;
//  
//  *a=*b;
//  *b=temp;
//    
//};
int main(){

 cout<<"team a \n";
 team asif;
 asif.seTname("asif",12,1);
 asif.printinfo();

      cout<<"team b\n ";
      team b;
      b.seTname("ahmad",20,0);
      b.printinfo();
    
cout<<"team\n"; 
team rashid;
rashid.seTname("rashid",23,2);
rashid.printinfo();     

return 0;		
	
}

