#include <iostream>
using namespace std;

int main(){
	int matrix1[3][3], matrix2[3][3], product[3][3];
	cout<<"enter element of matrix 1 \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
			cin>>matrix1[i][j];
	}
	}
	cout<<"enter element of matrix 2 \n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matrix2[i][j];
	}
	}
	for(int i=0;i<3;i++){
		for( int j=0;j<3;j++){
		
			product[i][j]=product[i][j]+matrix1[i][j]*matrix2[i][j];
		
	}
}
	cout<<"the  of two matrix \n";
	for(int i=0;i<3;i++){
		cout<<endl;
	for( int j=0;j<3;j++){
			cout<<product[i][j]<<"";

}
cout<<endl;



}

return 0;
}

