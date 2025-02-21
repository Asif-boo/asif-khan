 #include <iostream>
using namespace std ;
//int factorial(int n){
	//if(n<1){
	//	return 1;
	//}
	//return n*factorial(n-1);
	
	
//}



//int main(){
//	int list[5]={1,2,3,4,5};
//	
//	int no,i;
//	
//	int sum=0;
//	
//	cout<<"enter no of elements\n" ;
//	cin>>no;
//	cout<<" enter " <<no<< " elements\n";
//
//	for(i=0;i<no;i++)
//		
//
//	for(i=0;i<no;i++){
//		 sum=sum+list[i];
//		
//	}
//	cout<<"sum is "<<sum;
	 
	//cout<<list[0]<<endl<<list[1]<<endl<<list[2]<<endl<<list[3]<<endl<<list[4];
	//int a;
	//cout<<"enter a number ";
	//cin>>a;
	//cout <<"factorial of a is " <<factorial(a);
	
	//int i;
	
	//int no;
	//cout<<"ai";
	//for(i=0;i<no;i++){
		///cin>>no;
	//}
	//cout<<"\n asif khan";
	//for(i=0;i<no;i++)
	//{
	//	cout<<"\n"<<arrays[i];
	//}
//	int i,j;
//	int matrix[2][2];
//	cout<<"enter the numbers\n";
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++){
//		
//		cin>>matrix[i][j];
//		}
//	}
//	cout<<"displaying the matrix\n";
//	for(i=0;i<2;i++)
//	{
//		cout<<endl;
//		for(j=0;j<2;j++){
//		
//		cout<<"\t"<<matrix[i][j];
//	}
//	}
int main(){
	int i,j;
	int matrix[5][5];
	int row,col;
	cout<<"enter number of rows:";
	cin >>row;
	cout<<"\n enter number of columns ";
	cin>> col;
	cout<<"\n input elements";
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
		{
			//cout<<"\n enter at location("<<i<<","<<j<<"):";
				cin >>matrix[i][j];
				
		}
	}
	cout <<"\n displaying the enterd matrix ";

	for(i=0;i<row;i++){
		
		cout<<endl;
		for (j=0;j<col;j++){
		
			cout<<"\t"<<matrix[i][j];
		}
	}
	

		return 0;
	
	
	
	
	
	
	
	
}
