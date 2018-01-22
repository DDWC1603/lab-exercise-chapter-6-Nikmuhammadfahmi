//Name : Nik Muhammad Fahmi Bin Nik Yusoff
//Matrics : A17DW2214

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std ;

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	gets (strPswd);
	
	if(strcmp(strPswd,"password"))
	{
		cout<<"invalid password "<<endl; }
	
	 
	else cout<<"Logged in "<<endl;

	

	return 0;
}
