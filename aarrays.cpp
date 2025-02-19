#include <iostream>
using namespace std;

int main(){
int arrays[3][3];
int row;
int col;
cout <<"enter the number of rows\n"<<endl;
cin>>row;
cout<<"enter the number the columns "<<endl;
cin>>col;
cout<<"INPUT THE elements Ooo";
for (int i=0;i<row;i++){
	cout<<endl;
	for (int j=0;i<col;j++){
		//cout<<"enter the elements at location("<<i<<","<<j<<"):\n";
		cin>>arrays[i][j];
	}
	
}
cout<<"displaying the enterd matrix "<<endl;
for(int i=0;i<row; i++){
	for(int j=0;j<col;j++){
		cout<<arrays[i][j];
	}
}




return 0;
}

