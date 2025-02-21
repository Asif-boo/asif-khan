#include <iostream>
#include <string.h>
using namespace std;

int main(){
char* string1="my name is asif khan";
char* string2;
string2=strdup(string1);
cout<<"string 2 ="<<string2;




return 0;
}

