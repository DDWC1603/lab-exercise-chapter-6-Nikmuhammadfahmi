//Name : Nik Muhammad Fahmi Bin Nik Yusoff
//Matrics : A17DW2214

#include <iostream>
#include <cstring>
using namespace std ;

int main()
{
	char char1[11], char2[21];

	strcpy(char1,"haillo");
	strcpy(char2," there");
	strcat(char1, char2);

	cout<<char1<<endl;
	cout<<char2<<endl;

	return 0;
}
