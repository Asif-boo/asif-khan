#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a,int b){
cout<<"\n using function with 2 arguments";
return a+b;
}
int sum (int a,int b,int c){
cout<<"\n using funtion wiith 3 arguments ";
return a+b+c;
}
//calculating volume of cylinder
int volume(double r,int h){

return 3.14*r*r*h;}
// calculating volume of a cube
int volume(int a){

return a*a*a;}
//calculating volume of rectengular box
int volume(int l,int h,int b){
	return l*h*b;
}

int main(){	
cout<<"\n the volume of cuboid 5,6 and 4 "	<<volume(5,6,4)<<endl;
cout<<"\n volume of cylinder of radius 9 and height 10 is  "<<volume(9,10);
cout <<"\n volume of a cube iof 3 is "<<volume(2);
	

cout<<" the sum of 3 and 4 is "<<sum(3,4);
cout<<" the sum of 2,6 and 6 is "<<sum (5,6,7);


	
	
	
	
	
	
	
	
	
	
	return 0;
}
