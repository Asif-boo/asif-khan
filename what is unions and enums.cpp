#include <iostream>
using namespace std;

int main(){

enum asifak{ahm,awa,ism,rashid
};
union asif{
int ahm;
float awa;
char ism;
double rashid;	
};

asif asif;
asifak ak;
ak =ahm;
asif.ahm=100;
if(ak==ahm){
	cout<<"ahm:"<<asif.ahm;
}

ak=awa;
asif.awa=375;
if(ak==awa){
	cout<<"\n awa:"<<asif.awa<<endl;
}
	ak=ism;
	asif.ism='4';

	if(ak==ism) {
	
	cout<<"ism:"<<asif.ism<<endl;
}
	ak=rashid;
	asif.rashid=345698;
	if(ak = rashid){
		
	cout<<"rashid "<<asif.rashid<<endl;
	}






return 0;	
}






