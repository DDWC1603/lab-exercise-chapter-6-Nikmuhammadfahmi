//Name : Nik Muhammad Fahmi Bin Nik Yusoff
//Matrics : A17DW2214

#include <iostream>
using namespace std;

int ary[]={0, 1, 2, 3, 4};

int n, result=0;

int main()
{

	for(n=0 ; n<5 ; ++n)
	{
		result += ary[n];
	}
	cout<<result;
	
	return 0 ;
	

}
