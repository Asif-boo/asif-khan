#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//my ist idea to train model for villager people,
//so they can easily get help of AI and technology <<<dated 23-12- 2204>>>
int main(int argc, char** argv) {
	
      cout<<"please enter marks you have obtaind = ";

       int marks=550;
       int obtaind;
int choice;
int profession;
       cin>>obtaind;
       cout<<"percentage="<<obtaind*100/550<<"%\n";
       if(obtaind>=500){
                       		cout<<"\n GRADE A1";
                      		cout<<"\n what is the reason ";
							cout<<" of your maximum marks ?";
                           	cout<<"\n hard work or fate ? "
						    <<endl<<" chose one";
                           	cout <<"\n 1=hard work"<<endl<<"\n 2=fate";
                       		cin>>choice;
                       		
                       		
                            if (choice==1){
                cout<<"/n its good keep contineous " ;
				 cout<<" your hard work it will pay";
               	cout<<"\n and what  you want to do in the future ?";
                cout<<"\n please chose your profession";
                cout<<"\n 1=doctor"<<endl<<"2=teacher"<<
				endl<<"3=eng"<<endl<<"4=pilot"<<"\n or other";
                cin>>profession;
                if(profession==1){
                cout<<"\n its good";	
								} 
							    else if(profession==2){
							    	cout<<"\n its good";
								}
							      
							    else if(profession==3){
							    	cout<<"\n its good";	
								}
							           
							    else if(profession==4){
							    	cout<<"\n its good";	
								}
							    else if (choice==2){	
							    	cout<<"\n you believe in fate";
								}         
					     }
	}
         else if(obtaind>=480){
    	 cout<<"grade A1";
    	 cout<<"\n work hard ,so you will improve more ";
    	 cout<<"you can do it";
    }
                    else if(obtaind>=450){
                    cout<<"grade A";
                    cout<<"\n good but improve your self";
                    
	                }
 else if(obtaind>=400){
 cout<<"grade B";
 cout <<"\n not so good work hard ";
 }

                   else if(obtaind>=300){
                   cout<<"grade C";
                   cout<<"\n not good "<<endl<<"if you do not work hard you will do nothing in the future";
                   }

 else {
 cout<<"fail";
 cout <<"\n try for your best";
 }
	return 0; 
	
}

