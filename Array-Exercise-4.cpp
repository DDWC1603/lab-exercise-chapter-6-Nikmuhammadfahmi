//Name : Nik Muhammad Fahmi Bin Nik Yusoff
//Matrics : A17DW2214

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int array[10][10][10],dim1,dim2,dim3,i,j,k;
	cout<<"Enter the three dimensions size : ";
	cin>>dim1>>dim2>>dim3;
	
	cout<<"Enter elements of array"<<endl;

	for(i=0;i<dim1;i++)
		for(j=0;j<dim2;j++)
			for(k=0;k<dim3;k++)
			{
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=";
				cin>>array[i][j][k];
			}

	cout<<"Displaying elements of array"<<endl;

	
	for(i=0;i<dim1;i++)
		for(j=0;j<dim2;j++)
			for(k=0;k<dim3;k++)
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
				
}
